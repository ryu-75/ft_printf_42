#include "libft/libft.h"

int	ft_printf(char const *format, ...)
{
	int	i;
	int	ret;

	ret = 0;
	i = 0;
	va_list	args;

	va_start(args, format);
	while (format[i++])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			ret = write(1, 'c', 1);
		}
	}
	va_end(args);
	return (ret);
}

int	main()
{
	fr_printf("%c");
}
