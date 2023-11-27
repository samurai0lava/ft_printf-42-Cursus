#include "libftprintf.h"

int ft_putstr(char *str)
{
    int len;

    len = 0;
    while(*str != '\0')
    {
        write(1, str, 1);
         str++;
        len++;
    }
    return (len);
}