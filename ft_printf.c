/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:11:14 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/17 21:12:04 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct	s_format
{
	va_list	args;
	int	width;	//witdh
	int	prc;	//precision
	int	zpad;	//zero padding
	int	pnt;	// .
	int	dsh;	// -
	int	tlength;//total_length (return value)
	int	sign;	//pos or neg format
	int	zero;	//is number zero
	int	perc;	// %
	int	space;	//space flag ' '
}		t_format;

t_format	*ft_initialise_tab(t_format *tab)
{
	tab->width = 0;
	tab->prc = 0;
	tab->zpad = 0;
	tab->pnt = 0;
	tab->dsh = 0;
	tab->tlength = 0;
	tab->sign = 0;
	tab->zero = 0;
	tab->perc = 0;
	tab->space = 0;
	return (tab);
}	

int	ft_printf(const char *format, ...)
{
	int	i;
	char	*tab;
	
	// initalise le malloc avec la taille de la structure
	// si tab n existe pas retourne NULL
	// initialise tab avec ft_initialise_tab
	va_arg(tab->args, format); 	// initialisation  
		
}
