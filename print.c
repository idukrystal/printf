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
		return (write(1, &tmp, 1));
	case 's':
		tmp_string = va_arg(args, char*);
		if (tmp_string == NULL)
			tmp_string = "(null)";
		return (write(1, tmp_string, _strlen(tmp_string)));
	case '%':
		return (write(1, &c, 1));
	case 'd':
	case 'i':
		return (print_number(va_arg(args, int)));
	case 'b':
	case 'o':
	case 'x':
	case 'X':
		return (to_base(va_arg(args, unsigned int), c));
	default:
		tmp = '%';
		return (write(1, &tmp, 1) + write(1, &c, 1));
	}
}
