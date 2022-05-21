# ifndef FT_PRINT_F
#define FT_PRINT_F

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

void	ft_putnb(int n);

size_t	ft_printnbr(int n);

size_t	ft_putchar(char c);

size_t	ft_uputnb(unsigned long int n);

void	ft_puthex_low(unsigned int n);

void	ft_puthex_up(unsigned int n);

void	ft_puthexptr(unsigned long long int n);

size_t	ft_printptr(unsigned long long int n);

size_t	ft_hexalen(unsigned long int n);

size_t	ft_numlen(int long n);

size_t	ft_putstr(char const *str);

size_t	ft_arg(va_list args, char const c);

size_t	ft_printstr(char const *str);

int	ft_strlen(char const *str);

int	ft_printf(char const *format, ...);

size_t	ft_printperc(void);

size_t	ft_printhex_up(unsigned int n);

size_t	ft_printhex_low(unsigned int n);

size_t	ft_hexaptrlen(unsigned long long int n);

# endif
