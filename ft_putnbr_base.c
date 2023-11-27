#include "libftprintf.h"

int	ft_putnbr_base(long nbr, int base, int check)
{
	char	*base_k;
	int 	len;

	if(check == 0)
		base_k = "0123456789abcdef";
	else
		base_k = "0123456789ABCDEF";
	len = 0;
	if (nbr < 0)
	{
		len += ft_putchar('-');
		len += ft_putnbr_base(-nbr, base, check);
	}
	else if (nbr >= base)
	{
		len += ft_putnbr_base(nbr / base, base, check);
		len += ft_putchar(base_k[nbr % base]);
	}
	else
		len += ft_putchar(base_k[nbr % base]);
	return (len);
}