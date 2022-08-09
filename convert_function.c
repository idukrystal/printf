#include <stdlib.h>
#include "main.h"

/**
 * to_base - prints an unsigned int in any given base
 * @n: the integer
 * @b: a char trpresenting the base
 * @f: flag pointer
 * Return: number of chars printed;
 */
int to_base(unsigned int n, char b, flags *f)
{
	unsigned int i = 0;

	if ((f->hash == 1 && n != 0) && (b == 'X' || b == 'x'))
		i += _puts("0X");
	i += base_n(n, b);
	return (i);
}

/**
 * base_n- prints insigned int
 * @n: integer
 * @b: charcter of base
 * Return: no
 */
int base_n(unsigned int n, char b)
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
		i  += base_n(n / base, b);
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

/**
 * to_address - get address
 * @ad:  insigned log
 * Return: i
 */
int to_address(unsigned long ad)
{
	int i = 0;

	if (ad == 0)
		return (_puts("(nil)"));
	i += _puts("0x");
	i += to_long_hex(ad);

	return (i);
}
int to_long_hex(unsigned long ad)
{
	int i = 0;
	unsigned long tmp = 0;

	if (ad == 0)
		return (_putchar('0'));
	if (ad / 16 != 0)
		i += to_long_hex(ad / 16);
	tmp = ad % 16;
	if (tmp < 10)
		return (i + _putchar((tmp) + 48));
	else
		return (i + _putchar((tmp - 10) + 97));
}
