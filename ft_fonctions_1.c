/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonctions_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchehbi <lchehbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:36:00 by lchehbi          #+#    #+#             */
/*   Updated: 2026/05/08 15:36:00 by lchehbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* ft_putchar: écrit un caractère sur la sortie standard. */
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/* ft_putstr: écrit une chaîne de caractères sur la sortie standard. */
int	ft_putstr(char *str)
{
	int	len;

	if (!str)
	{
		str = "(null)";
	}
	len = 0;
	while (str[len])
	{
		write(1, &str[len], 1);
		len = len + 1;
	}
	return (len);
}
