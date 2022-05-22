/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:59:54 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/21 14:31:55 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnb(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnb(-n);
	}
	else if (n > 9)
	{
		ft_putnb(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

size_t	ft_printnbr(int n)
{
	ft_putnb(n);
	return(ft_numlen(n));
}
/*
int	main()
{
	int	n = -5623;

	printf("%zu", ft_putnb(n));
}
*/
