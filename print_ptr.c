#include "libftprintf.h"

int	print_ptr(void *p)
{
	unsigned long	cast;

	cast = (unsigned long)p;
	print_str("0x");
	print_longhex(cast);
	return (1);
}
