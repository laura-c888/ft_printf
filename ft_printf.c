/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchehbi <lchehbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:36:00 by lchehbi          #+#    #+#             */
/*   Updated: 2026/05/08 15:36:00 by lchehbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** ft_conversion: appelle le bon gestionnaire selon le spécificateur de format.
*/
static int	ft_conversion(char spec, va_list args)
{
	if (spec == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	else if (spec == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (spec == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (spec == 'x')
		return (ft_puthex((unsigned long)va_arg(args, unsigned int), 0));
	else if (spec == 'X')
		return (ft_puthex((unsigned long)va_arg(args, unsigned int), 1));
	else if (spec == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (spec == '%')
		return (ft_putchar('%'));
	return (0);
}

/*
** ft_printf: réimplémentation simplifiée de printf.
*/
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			count = count + ft_conversion(format[++i], args);
		else if (format[i] == '%' && !format[i + 1])
			return (-1);
		else
			count = count + ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
