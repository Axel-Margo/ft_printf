#include "libftprintf.h"

int	print_nbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n > 9)
		print_nbr(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
	return (1);
}
