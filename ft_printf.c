#include "libftprintf.h"

int	print_var(char symbol, va_list cpy)
{
	if (symbol == 'd' || symbol == 'i')
		return (print_nbr(va_arg(cpy, int)));
	else if (symbol == 'c')
		return (print_char(va_arg(cpy, int)));
	else if (symbol == 's')
		return (print_str(va_arg(cpy, char *)));
	else if (symbol == 'p')
		return (print_ptr(va_arg(cpy, void *)));
	else if (symbol == 'u')
		return (print_uns(va_arg(cpy, unsigned)));
	else if (symbol == 'X')
		return (print_upphex(va_arg(cpy, int)));
	else if (symbol == 'x')
		return (print_hex(va_arg(cpy, int)));
	else if (symbol == '%')
		return (write(1, "%", 1));
	return (1);
}

void	ft_printf(char *str, ...)
{
	va_list	params;

	va_start(params, str);
	while (*str)
	{
		if (*str == '%')
		{
			*str++;
			print_var(*str, params);
			*str++;
		}
		else
			write(1, &*str++, 1);
	}
	va_end(params);
}
/*
int main()
{
	int c = 843;
	char test = 'z';
	char *z = &test;
	char carac = 'y';
	char *str1 = "ca fonctionne mais peut etre que ce char :";
	printf("\n%p", z);
}*/
