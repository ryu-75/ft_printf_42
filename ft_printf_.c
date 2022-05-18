#include "libft/libft.h"

typedef struct s_flags
{
	va_list	arg;
	int	minus;	// dash -
	int	perc;	// %
	int	wth;	// width
	int	prec;	// precision
	int	nzero;	// zero '0'
	int	lgt;	// length
	
}

int	ft_printf(char const format, ...)
{
	int	i;
	char	*tab;
	int	ret;
	int	tablen;

	tablen = ft_strlen(format);
	tab = (void *)malloc(sizeof(void) * tablen + 1);
	if (!tab)
		return (NULL);
}
