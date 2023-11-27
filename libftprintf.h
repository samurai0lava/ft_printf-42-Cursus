# ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H


#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     ft_putchar(int c);
int     ft_putstr(char *str);
int     ft_putnbr_base(long nbr, int base, int check);
int     ft_putptr(void *ptr);
int     ft_printf(const char *format, ...);
char    *ft_strchr(const char *s, int c);

#endif