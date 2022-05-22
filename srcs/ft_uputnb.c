/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:00:09 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/21 13:03:58 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_uputnb(unsigned long int n)
{
	if (n > 9)
	{
		ft_uputnb(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar((n * 10) / 10.0 + '0');
	return (ft_numlen(n));
}
/*
int	main()
{
	int	n = 5;

	printf("%zu", ft_uputnb(n));
}
*/
