#include <stdlib.h>
#include "main.h"

/**
 * to_base - prints an unsigned int in any given base
 * @n: the int:
 * @b: a char trpresenting the base
 * Return: number of chars printed;
 */
int to_base(unsigned int n, char b)
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
		i  += to_base(n / base, b);
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

int to_address(unsigned long ad)
{
	int i = 0;

	i += _putchar('0');
	i += _putchar('x');
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
