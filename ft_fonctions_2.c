/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonctions_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchehbi <lchehbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:36:00 by lchehbi          #+#    #+#             */
/*   Updated: 2026/05/08 15:36:00 by lchehbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* ft_putunbr: écrit un entier décimal non signé. */
int	ft_putunbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count = count + ft_putunbr(n / 10);
	}
	count = count + ft_putchar((char)((n % 10) + '0'));
	return (count);
}

/* ft_putnbr: écrit un entier décimal signé. */
int	ft_putnbr(int n)
{
	long	nb;
	int		count;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		count = count + ft_putchar('-');
		nb = -nb;
	}
	count = count + ft_putunbr((unsigned int)nb);
	return (count);
}

/* ft_puthex: écrit un nombre en hexadécimal. */
int	ft_puthex(unsigned long n, int uppercase)
{
	const char	*digits;
	int			count;

	count = 0;
	if (uppercase)
	{
		digits = "0123456789ABCDEF";
	}
	else
	{
		digits = "0123456789abcdef";
	}
	if (n >= 16)
	{
		count = count + ft_puthex(n / 16, uppercase);
	}
	count = count + ft_putchar(digits[n % 16]);
	return (count);
}

/* ft_putptr: écrit l'adresse d'un pointeur. */
int	ft_putptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		return (ft_putstr("(nil)"));
	}
	count = count + ft_putstr("0x");
	count = count + ft_puthex((unsigned long)ptr, 0);
	return (count);
}
