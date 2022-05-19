/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:00:19 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/19 16:00:20 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_puthex(const char *format, unsigned int n)
{
	char	*lowerbase;
	char	*upperbase;
	int	len;
	int	i;

	i = 0;
	lowerbase = "0123456789abcdef";
	upperbase = "0123456789ABCDEF";
	len = ft_strlen(lowerbase);
	while (n >= len)
	{	
		ft_puthex(format, n / len);
		n = n % len;
		len++;
	}
	if (format[i + 1] == 'x')
		ft_putchar(lowerbase[n]);
	else if (format[i + 1] == 'X')
		ft_putchar(upperbase[n]);
}
