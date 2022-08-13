#include "main.h"

/**
 * print_specifier - prints out a specifier
 * @c: the specier
 * @args: variable arg cintaing specifier
 * @f: flags
 * Return: total chars printed;
 */
int print_specifier(char c, va_list args, flags *f)
{
	switch (c)
	{
	case 'c':
		return (_putcharf(va_arg(args, int), f->width));
	case 's':
		return (_putsf(va_arg(args, char *), f->width));
	case '%':
		return (_putcharf(c, f->width));
	case 'd':
	case 'i':
		if (f->l == 1)
			return (print_l_number(va_arg(args, long int), f));
		if (f->h == 1)
			return (print_s_number(va_arg(args, int), f));
		return (print_number(va_arg(args, int), f));
	case 'u':
		if (f->l == 1)
			return (print_lu_number(va_arg(args, unsigned long)));
		return (print_u_number(va_arg(args, unsigned int)));
	case 'b':
	case 'o':
	case 'x':
	case 'X':
		if (f->l == 1)
			return (to_l_base(va_arg(args, unsigned long), c, f));
		if (f->h == 1)
			return (to_s_base(va_arg(args, unsigned int), c, f));
		return (to_base(va_arg(args, unsigned int), c, f));
	case 'S':
		return (print_ascii(va_arg(args, char *)));
	case 'r':
		return (print_rev(va_arg(args, char *)));
	case 'p':
		return (to_address(va_arg(args, unsigned long)));
	case 'R':
		return (rot13(va_arg(args, char *)));
	default:
		return (_putchar('%') + _putchar(c));
	}
}

/**
 * _putsf - prints a formated string
 * @s: the char
 * @width: space to fill
 * Return: no of charactes pribted
 */
int _putsf(char *s, int width)
{
	int len = _strlen(s);
	int i, tot = 0;

	for (i = 0; i < (width - len); i++)
		tot += _putchar(' ');

	tot += _puts(s);
	return (tot);

}

/**
 * _putcharf - prints a formated char
 * @c: the char
 * @width: space to fill
 * Return: no of charactes pribted
 */
int _putcharf(char c, int width)
{
	int tot = 0, i;

	for (i = 0; i < (width - 1); i++)
		tot += _putchar(' ');
	tot += _putchar(c);
	return (tot);
}
