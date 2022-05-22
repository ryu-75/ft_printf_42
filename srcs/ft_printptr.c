/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:24:53 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/21 17:37:46 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_puthexptr(unsigned long long int n)
{
	char	*base;

	base = "0123456789abcdef";
	if(n >= 16)
	{
		ft_puthexptr(n / 16);
		n %= 16;
	}
	ft_putchar(base[n]);
}

size_t	ft_printptr(unsigned long long int n)
{
	if (n == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else 
	{
		write(1, "0x", 2);
		ft_puthexptr(n);
	}
	return(ft_hexaptrlen(n) + 2);
}
/*
int	main()
{
	printf(" %zu %zu\n", ft_printptr(0), ft_printptr(0));

	void*	n = LONG_MIN;

	printf("%p", n);
}
*/
