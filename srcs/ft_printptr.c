/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:24:53 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/20 17:24:55 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_puthexptr(unsigned long long int n)
{
	char	*base;

	base = "0123456789abcdef";
	if(n >= 16)
	{
		ft_puthex_low(n / 16);
		n %= 16;
	}
	ft_putchar(base[n]);
	return (1);
}

size_t	ft_hexalen(unsigned long long int n)
{
	int	count;
	char	*base;

	base = "0123456789abcdef";
	count = (n == 0);
	if (n == 0)
		count++;
	if (n >= 16)
	{
		n /= 16;
		count++;
	}
	return (count);	
}

size_t	ft_printptr(unsigned long long int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		write(1, "(nill)", 6);
		return (0);
	}
	write(1, "0x", 2);
	ft_puthexptr(n);
	return(ft_hexalen(n + 2));
}
