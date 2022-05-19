#include "../includes/ft_printf.h"

size_t	ft_strprint(char const *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		ft_putstr("(nill)");
		return (0);
	}
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;	
	}
	return (count);
}
