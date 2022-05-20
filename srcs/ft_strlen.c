/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:59:41 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/20 17:17:43 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_numlen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	else if (n < 0)
	{
		n *= -1;
		count++;
	}
	else if (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);	
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
