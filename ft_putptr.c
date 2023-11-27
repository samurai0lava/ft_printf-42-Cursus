#include "libftprintf.h"
#include <stdint.h>

int ft_putptr(void *ptr)
{
    int len;

    len = 0;
    len += ft_putstr("0x");
    len += ft_putnbr_base((long)ptr, 16, 0);
    return (len);
}
