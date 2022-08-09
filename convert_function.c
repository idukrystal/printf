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
	unsigned int i = 1, tmp;
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
	if (n / base == 0)
	{
		tmp = n % base;
		if (b == 'x')
			return (_putchar(tmp - 10 +97));
		else if(b == 'X')
			return (_putchar(tmp - 10 +65));
		return (_putchar(tmp + 48));
	}
	i  += to_base(n / base, b);
	tmp = n % base;
	if (tmp < 10)
	{
		_putchar(tmp + 48);
	}
	else if (b == 'x')
	{
		_putchar((tmp - 10) + 97);
	}
	else
	{
		_putchar((tmp - 10) + 65);
	}
	return (i);
}
