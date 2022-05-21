/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:24:53 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/21 11:59:43 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_puthexptr(unsigned long int n)
{
	char	*base;

	base = "0123456789abcdef";
	if(n >= 16)
	{
		ft_puthex_low(n / 16);
		n %= 16;
	}
	ft_putchar(base[n]);
}

size_t	ft_printptr(unsigned long int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		write(1, "(nill)", 6);
		return (6);
	}
	write(1, "0x", 2);
	ft_puthexptr(n);
	return(ft_hexalen(n) + 2);
}
