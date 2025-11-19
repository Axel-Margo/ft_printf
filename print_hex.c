#include "libftprintf.h"

int	print_hex(int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n < 0)
		return (1);
	if (n > 15)
		print_hex(n / 16);
	n = n % 16;
	write(1, &base[n], 1);
	return (1);
}
/*
int main()
{
	print_hex(1);
	write(1, "\n", 1);
	print_hex(3);
	write(1, "\n", 1);
	print_hex(18);
	write(1, "\n", 1);
	print_hex(231);
	write(1, "\n", 1);
	print_hex(-1);
}*/
