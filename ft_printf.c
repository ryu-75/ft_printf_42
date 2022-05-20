/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:13:17 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/20 10:58:01 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

size_t	ft_arg(va_list args, char const *c)
{
	size_t	i;

	i = 0;
	while (c[i])
	{
		if (c[i] == 'c')
		{
			return(ft_putchar(va_arg(args, int)));
		}
		else if (c[i] == 's')
		{
			return(ft_strprint(va_arg(args, char *)));
		}
		i++;
	}
	return (0);
}

int	ft_printf(char const *format, ...)
{
	int	i;
	int	ret;

	ret = 0;
	i = 0;
	va_list	args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] && format[i] == '%' && format[i + 1] != '\0')
		{	
			ret += ft_arg(args, &format[i + 1]);
			i++;
		}
		else
			ret = write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (ret);
}

int	main()
{
	ft_printf("string : %s\nchar : %c\n", "bonjour", 't');
}
