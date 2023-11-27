#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include "ft_printf.h"

int main (void)
{
	char c = 'a';
	char s[] = "TESST 1337 smaurai0lava";
	int max = 2147483647;
	int min = -2147483648;
	int nul = 0;
	unsigned int ui = 1337;
	unsigned int nui = -5;
	char *p = &c;
	int *pt = &min;
	long max_l = LONG_MAX;
	long min_l = LONG_MIN; 
	ft_printf("\n******************************************--  my printf: --*****************************************\n");
	int nbr = ft_printf("character :  %c\n", c);
	nbr += ft_printf("string :         %s\n", s);
	nbr += ft_printf("decimal max :    %d\n", max);
	nbr += ft_printf("integer min :    %i\n", min);
	nbr += ft_printf("unsigned :       %u\n", ui);
	nbr += ft_printf("unsigned neg :   %u\n", nui);
	nbr += ft_printf("pointer of char: %p\n", p);
	nbr += ft_printf("pointer of min : %p\n", pt);
	nbr += ft_printf("null in hex :    %x\n", nul);
	nbr += ft_printf("max in hex :     %X\n", max);
	nbr += ft_printf("NULL STR :       %s", (char *)NULL);
	nbr += ft_printf("                 %%\n");
	nbr += ft_printf("POINTER LONG     %p \n%p\n ", &min_l, &max_l);
	nbr += ft_printf("                 %p\n", (void *)-14523);
	nbr += ft_printf("0x               %p-\n", (void *)ULONG_MAX);
	nbr += ft_printf("                 %pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	nbr += ft_printf("S4%Xf`<f$J '%X@%i!EAsCK4%xy_%d)-7l3Mjln%pf1+q6%%%Xo{{ulxmt%i{dNsv4A<0%X`f}Qf\n", -1471565265, -1471859136, 1415328167, -11470702, 240168234, (void *)-1415595296739750836, -1039313513, 1875270030, -707402165);

	printf("\n*****************************************-- original printf: --********************************************\n");
	int num = printf("character :   %c\n", c);
	num += printf("string :         %s\n", s);
	num += printf("decimal max :    %d\n", max);
	num += printf("integer min :    %i\n", min);
	num += printf("unsigned :       %u\n", ui);
	num += printf("unsigned neg :   %u\n", nui);
	num += printf("pointer of char :%p\n", p);
	num += printf("pointer of min : %p\n", pt);
	num += printf("null in hex :    %x\n", nul);
	num += printf("max in hex :     %X\n", max);
	num += printf("NULL STR :       %s\n", (char *)NULL);
	num += printf("                 %%\n");
	num += printf("POINTER LONG     %p\n%p\n", &min_l, &max_l);
	num += printf("                 %p\n", (void *)-14523);
	num += printf("0x               %p-\n", (void *)ULONG_MAX);
	num += printf("                 %pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	num += printf("S4%Xf`<f$J '%X@%i!EAsCK4%xy_%d)-7l3Mjln%pf1+q6%%%Xo{{ulxmt%i{dNsv4A<0%X`f}Qf\n", -1471565265, -1471859136, 1415328167, -11470702, 240168234, (void *)-1415595296739750836, -1039313513, 1875270030, -707402165);

	ft_printf("\n*****************************************-- return values --***************************************************\n");
	printf("my printf :           %d\n", nbr);
	printf("original printf :     %d\n", num);
}
