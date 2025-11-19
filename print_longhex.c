#include "libftprintf.h"

int	print_longhex(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
		print_longhex(n / 16);
	n = n % 16;
	write(1, &base[n], 1);
	return (1);
}
