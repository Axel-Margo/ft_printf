#include "libftprintf.h"

int	print_uns(unsigned int n)
{
	if (n > 9)
		print_uns(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
	return (1);
}
/*
int main()
{
	print_uns(4294967292);
}*/
