#include "libftprintf.h"



static int check_format(const char format, va_list ap)
{
    int len;

    len = 0;
    if(format == 'c')
        len += ft_putchar(va_arg(ap, int));
    else if (format == 's')
        len += ft_putstr(va_arg(ap, char *));
    else if (format == 'd' || format == 'i')
        len += ft_putnbr_base((long)va_arg(ap, int), 10, 0);
    else if (format == 'x')
        len += ft_putnbr_base((long)va_arg(ap, unsigned int), 16, 0);
    else if (format == 'X')
        len += ft_putnbr_base((long)va_arg(ap, unsigned int), 16, 1);
    else if (format == 'p')
        len += ft_putptr(va_arg(ap, void *));
    else if (format == '%')
        len += ft_putchar('%');
    else if (format == 'u')
        len += ft_putnbr_base((long)va_arg(ap, unsigned int), 10, 0);
    else
        len = -1;
    return (len);
}

int ft_printf(const char *format, ...)
{
    int i;
    va_list ap;
    int count;

    i = 0;
    count = 0;
    va_start(ap, format);

    while (format[i])
    {
        if (format[i] == '%' && format[i + 1] == '\0')
            return (-1);
        else if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
        {
            count += check_format(format[i + 1], ap);
            i++;
        }
        else
            count += ft_putchar(format[i]);
        i++;
    }
    va_end(ap);
    return (count);
}

// int main (void)
// {
// 	char c = 'a';
// 	char s[] = "valarmo";
// 	int max = 2147483647;
// 	int min = -2147483648;
// 	int nul = 0;
// 	unsigned int ui = 1337;
// 	unsigned int nui = -5;
// 	char *p = &c;
// 	int *pt = &min;

// 	ft_printf("my printf:\n");
// 	int nbr = ft_printf("character : %c\n", c);
// 	nbr += ft_printf("string : %s\n", s);
// 	nbr += ft_printf("decimal max : %d\n", max);
// 	nbr += ft_printf("integer min : %i\n", min);
// 	nbr += ft_printf("unsigned : %u\n", ui);
// 	nbr += ft_printf("unsigned neg : %u\n", nui);
// 	nbr += ft_printf("pointer of char : %p\n", p);
// 	nbr += ft_printf("pointer of min : %p\n", pt);
// 	nbr += ft_printf("null in hex : %x\n", nul);
// 	nbr += ft_printf("max in hex : %X\n", max);
// 	nbr += ft_printf("%%\n");

// 	printf("\noriginal printf:\n");
// 	int num = printf("character : %c\n", c);
// 	num += printf("string : %s\n", s);
// 	num += printf("decimal max : %d\n", max);
// 	num += printf("integer min : %i\n", min);
// 	num += printf("unsigned : %u\n", ui);
// 	num += printf("unsigned neg : %u\n", nui);
// 	num += printf("pointer of char : %p\n", p);
// 	num += printf("pointer of min : %p\n", pt);
// 	num += printf("null in hex : %x\n", nul);
// 	num += printf("max in hex : %X\n", max);
// 	num += printf("%%\n");

// 	printf("\nmy printf : %d\n", nbr);
// 	printf("original printf : %d\n", num);
// }