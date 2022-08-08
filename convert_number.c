#include "main.h"

/**
 * to_base- convert to binary.
 * @n: integer
 * @b: binary.
 * Return: no return.
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
	case 'X':
	case 'x':
		base = 16;
	}
	if (n == 0)
		return (0);
	i += to_base(n / base, b);
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
