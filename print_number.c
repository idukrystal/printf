#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
unsigned int  print_number(int n, flags *f)
{
	unsigned int m, d, count, tot = 0;

	if (f->space == 1 && f->plus == 0 && n >= 0)
		tot += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		tot += _putchar('+');

	if (n < 0)
	{
		_putchar(45);
		tot++;
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
		tot++;
	}
	return (tot);
}

/**
 * print_u_number - prints an  unsigned integer.
 * @n: input integer
 * Return: no return.
 */
unsigned int  print_u_number(unsigned int n)
{
	unsigned int m, d, count, tot = 0;

	m = n;
	d = m;
	count = 1;
	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		tot += _putchar(((m / count) % 10) + 48);
	}
	return (tot);
}
