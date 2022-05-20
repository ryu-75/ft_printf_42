/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:00:19 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/20 12:22:10 by nlorion          ###   ########.fr       */
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
	return (1);
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
	return (1);
}
/*
int	main()
{
	unsigned int	n = 452365;
	printf("%zu\n", ft_puthex_low(n));
	printf("%zu", ft_puthex_up(n));
}
*/
