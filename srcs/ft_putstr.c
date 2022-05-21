/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:58:31 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/21 13:43:53 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar(char const c)
{
	write(1, &c, 1);
	return(1);
}

size_t	ft_putstr(char const *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

size_t	ft_printstr(char const *str)
{
	int	i;

	i = 0;
	if (!str)
		return(write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

size_t	ft_printperc(void)
{
	write(1, "%", 1);
	return (1);
}
