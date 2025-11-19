#include "libftprintf.h"

int	print_upphex(int n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n < 0)
		return (1);
	if (n > 15)
		print_upphex(n / 16);
	n = n % 16;
	write(1, &base[n], 1);
	return (1);
}
/*
int main()
{
	print_upphex(1);
	write(1, "\n", 1);
	print_upphex(3);
	write(1, "\n", 1);
	print_upphex(18);
	write(1, "\n", 1);
	print_upphex(229);
	write(1, "\n", 1);
	print_upphex(-1);
}*/
