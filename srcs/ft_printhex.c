/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:58:42 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/20 12:01:19 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_printhex(unsigned int n, char c)
{
	if (c == 'x')
		ft_puthex(c, n);
	else if (c == 'X')
		ft_puthex(c, n);
	return (1);
}

int	main()
{
	unsigned int	n = 42012;
	printf("%ld", ft_printhex(n, 'x'));
}
