#include <stdarg.h>
#include <stdio.h>

int	check_type(char variable)
{
	switch(variable)
	{
		case 'c' :
		return (1);
		case 's' :
		return (2);
		case 'p' :
		return (3);
		case 'd' :
		return (4);
		case 'i' :
		return (5);
		case 'u' :
		return (6);
		case 'x' :
		return (7);
		case 'X' :
		return (8);
		case '%' :
		return (9);
	}
	return (0);
}

int	*count_arg(char *str)
{
	int	*types;
	int	i;
	
	i = 0;
	while (*str)
	{
		while (*str != '%')
			str++;
		types[i++] = check_type(*str);
	}
	return (types);
}

void	print_var(int type, void *variable)
{

}

void	ft_printf(char *str, ...)
{
	va_list params;
	int		*types;

	va_start(params, str);
	
	types = count_arg(str);
	while(*str)
	{
		if (*str == '%')
		{
			str += 2;
			print_var[types[i]](va_arg(params, types[i]));
		}
		else
			write(1, &str, 1);
	}
}
