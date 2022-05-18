#include "../includes/ft_printf.h"


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnb(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnb(-n);
	}
	else if (n > 9)
	{
		ft_putnb(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

void	ft_unputnb(unsigned long long n)
{
	if (n > 9)
	{
		ft_unputnb(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

void	ft_puthex(unsigned int)

int	main()
{
	int	n = ;

	ft_unputnb(n);
	printf("\n");
	return (0);
}
