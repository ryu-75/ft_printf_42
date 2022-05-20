# ifndef FT_PRINT_F
#define FT_PRINT_F

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

void	ft_putnb(int n);
size_t	ft_putchar(char c);
size_t	ft_strprint(const char *str);
void	ft_ullputnb(unsigned long long n);
void	ft_puthex(const char *format, unsigned int n);
void	ft_putstr(char *str);

int	ft_strlen(char *str);
int	ft_printf(char const *format, ...);

# endif
