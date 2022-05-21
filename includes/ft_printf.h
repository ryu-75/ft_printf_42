# ifndef FT_PRINT_F
#define FT_PRINT_F

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

size_t	ft_putnb(int n);

size_t	ft_putchar(char c);

size_t	ft_strprint(const char *str);

size_t	ft_uputnb(unsigned long int n);

size_t	ft_puthex_low(unsigned int n);

size_t	ft_puthex_up(unsigned int n);

void	ft_puthexptr(unsigned long int n);

size_t	ft_printptr(unsigned long int n);

size_t	ft_hexalen(unsigned long int n);

size_t	ft_numlen(int n);

void	ft_putstr(char const *str);

size_t	ft_arg(va_list args, char const c);

size_t	ft_printstr(char const *str);

int	ft_strlen(char const *str);

int	ft_printf(char const *format, ...);

# endif
