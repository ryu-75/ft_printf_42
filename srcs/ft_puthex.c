/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:00:19 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/21 12:01:50 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_puthex_up(unsigned int n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
	{	
		ft_puthex_up(n / 16);
		n %= 16;
	}
	ft_putchar(base[n]);
	return (ft_hexalen(n));
}

size_t	ft_puthex_low(unsigned int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthex_low(n / 16);
		n %= 16;
	}
	ft_putchar(base[n]);
	return (ft_hexalen(n));
}
