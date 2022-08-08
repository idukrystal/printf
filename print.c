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
	int ti;

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
		return (_putchar('%'));
	case 'd':
	case 'u':
	case 'i':
		return (print_number(va_arg(args, int)));
	case 'b':
	case 'o':
	case 'x':
	case 'X':
		return (to_base(va_arg(args, int), c));
	default:
		return (_putchar('%') + _putchar(c));
	}
}
