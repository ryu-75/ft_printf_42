# ifndef FT_PRINT_F
#define FT_PRINT_F

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

size_t	ft_putnb(int n);

size_t	ft_putchar(char c);

size_t	ft_strprint(const char *str);

size_t	ft_uputnb(unsigned long long n);

size_t	ft_puthex_low(unsigned int n);

size_t	ft_puthex_up(unsigned int n);

size_t	ft_puthexptr(unsigned long long int n);

size_t	ft_printptr(unsigned long long n);

size_t	ft_hexalen(unsigned long long int n);

size_t	ft_numlen(int n);

void	ft_putstr(char *str);

int	ft_strlen(char *str);

int	ft_printf(char const *format, ...);

# endif
