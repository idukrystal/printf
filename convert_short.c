#include <stdlib.h>
#include "main.h"

/**
 * to_s_base - prints an unsigned int in any \
given base
 * @n: the integer
 * @b: a char trpresenting the base
 * @f: flag pointer
 * Return: number of chars printed;
 */
int to_s_base(unsigned short int n, char b, flags *f)
{
	unsigned int i = 0;

	if (f->hash == 1 && n != 0)
	{
		if (b == 'X' || b == 'x')
			i += _putchar('0') + _putchar(b);
		if (b == 'o')
			i += _putchar('0');
	}
	i += base_s_n(n, b);
	return (i);
}

/**
 * base_s_n- prints insigned int
 * @n: integer
 * @b: charcter of base
 * Return: no
 */
int base_s_n(unsigned short int n, char b)
{
	unsigned int i = 0, tmp;
	int base;

	switch (b)
	{
	case 'b':
		base = 2;
		break;
	case 'o':
		base = 8;
		break;
	case 'x':
	case 'X':
		base = 16;
	}

	if (n == 0)
	{
		return (_putchar('0'));
	}
	if (n / base != 0)
		i  += base_s_n(n / base, b);
	tmp = n % base;
	if (tmp < 10)
	{
		return (i + _putchar(tmp + 48));
	}
	else if (b == 'x')
	{
		return (i + _putchar((tmp - 10) + 97));
	}
	else
	{
		return (i + _putchar((tmp - 10) + 65));
	}
}
