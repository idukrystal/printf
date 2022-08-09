#include "main.h"

/**
 * print_specifier - prints out a specifier
 * @c: the specier
 * @args: variable arg cintaing specifier
 * Return: total chars printed;
 */
int print_specifier(char c, va_list args)
{
	char tmp;
	char *tmp_string;

	switch (c)
	{
	case 'c':
		tmp = va_arg(args, int);
		return (_putchar(tmp));
	case 's':
		tmp_string = va_arg(args, char*);
		if (tmp_string == NULL)
			tmp_string = "(null)";
		return (_puts(tmp_string));
	case '%':
		return (_putchar(c));
	case 'd':
	case 'i':
		return (print_number(va_arg(args, int)));
	case 'u':
		return (print_u_number(va_arg(args,unsigned int)));
	case 'b':
	case 'o':
	case 'x':
	case 'X':
		return (to_base(va_arg(args, unsigned int), c));
	case 'S':
		return (print_ascii(va_arg(args, char *)));
	case 'p':
		return (to_address(va_arg(args, unsigned long)));
	default:
		tmp = '%';
		return (_putchar(tmp) + _putchar(c));
	}
}
