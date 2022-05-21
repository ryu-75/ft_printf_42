/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:58:31 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/21 11:56:54 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar(char const c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

size_t	ft_printstr(char const *str)
{
	if (!str)
		return(write(1, "(null)", 6));
	else
		ft_putstr(&str);
	return (1);
}
