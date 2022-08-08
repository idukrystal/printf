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
		return (write(1, tmp_string, _strlen(tmp_string)));
	case '%':
		return (write(1, &c, 1));
	default:
		tmp = '%';
		return (write(1, &tmp, 1) + write(1, &c, 1));
	}
}
