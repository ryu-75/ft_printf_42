/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenvalue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:59:41 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/21 17:38:35 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_numlen(long n)
{
	int	count;

	count = (n == 0);
	if (n == 0)
		count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);	
}

size_t	ft_hexaptrlen(unsigned long long int n)
{
	int	count;

	count = (n == 0);
	while (n)
	{
		n /= 16;
		count++;
	}
	return (count);
}

size_t	ft_hexalen(unsigned long int n)
{
	int	count;

	count = (n == 0);
	while (n)
	{
		n /= 16;
		count++;
	}
	return (count);	
}

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}
/*
#include <limits.h>
int	main()
{
	
	printf("count :%d\n", printf("%p %p ", LONG_MIN, LONG_MAX));
	
	printf("count :%d\n", ft_printf("%p %p ", LONG_MIN, LONG_MAX));
	printf("count :%d\n", ft_printf("%p ", "hello"));
	printf("count :%d\n", ft_printf("%p ", "hello"));
	printf("count :%d\n", printf("%p ", "hello"));
}
*/
