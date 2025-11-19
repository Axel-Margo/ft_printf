#include "libftprintf.h"

int	print_unstr(unsigned char *s)
{
	while (*s)
		write(1, &*s++, 1);
	return (1);
}
