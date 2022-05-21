/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:00:19 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/21 15:29:35 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_up(unsigned int n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
	{	
		ft_puthex_up(n / 16);
		n %= 16;
	}
	ft_putchar(base[n]);
}

void	ft_puthex_low(unsigned int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthex_low(n / 16);
		n %= 16;
	}
	ft_putchar(base[n]);
}

size_t	ft_printhex_low(unsigned int n)
{
	ft_puthex_low(n);
	return(ft_hexalen(n));
}

size_t	ft_printhex_up(unsigned int n)
{
	ft_puthex_up(n);
	return (ft_hexalen(n));
}
