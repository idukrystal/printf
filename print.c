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
		return (_putchar(va_arg(args, int)));
	case 's':
		return (_puts(va_arg(args, char *)));
	case '%':
		return (_putchar(c));
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
