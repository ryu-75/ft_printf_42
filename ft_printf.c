/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:29:18 by nlorion           #+#    #+#             */
/*   Updated: 2022/05/21 15:49:45 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

size_t	ft_arg(va_list args, char const c)
{
	size_t	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_putchar(va_arg(args, int));
	else if (c == 's')
		ret += ft_printstr(va_arg(args, char *));
	else if (c == 'i')
		ret += ft_printnbr(va_arg(args, int));
	else if (c == 'd')
		ret += ft_printnbr(va_arg(args, long int));
	else if (c == 'u')
		ret += ft_uputnb(va_arg(args, unsigned int));
	else if (c == 'x')
		ret += ft_printhex_low(va_arg(args, unsigned long int));
	else if (c == 'X')
		ret += ft_printhex_up(va_arg(args, unsigned long int));
	else if (c == 'p')
		ret += ft_printptr(va_arg(args, unsigned long long int));
	else if (c == '%')
		ret += ft_printperc();
	return (ret);
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
			ret += ft_arg(args, format[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			ret++;
		}
		i++;
	}
	va_end(args);
	return (ret);
}
/*
int	main()
{
	int	n = 45123;
	int	*p = &n;

//	printf("string : %s\nchar : %c\nnumber : %i\nunsigned number : %u\ndecimal num : %d\nlow hexa : %x\nup hexa : %X\npointeur : %p\npercent : %%\n\n", "bonjour", 't', 42, 43, 44, n, n, p);

	ft_printf("string : %%%s\nchar : %c\nnumber : %i\nunsigned number : %u\ndecimal num : %d\nlow hexa : %x\nup hexa : %X\npointeur : %p\npercent : %%\n", "bonjour", 't', 42, 43, 44, n, n, p);
}
*/
