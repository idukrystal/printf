#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
unsigned int  print_number(int n)
{
	unsigned int m, d, count, tot = 0;

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
 * to_base- convert to binary.
 * @n: integer
 * @b: binary.
 * Return: no return.
 */

unsigned int to_base(unsigned int n, char b)

{
   unsigned int i = 1, tmp;
   int base;

   switch (b)
   {
       case 'b': base = 2;
       break;
       case 'o': base = 8;
       break;
       case 'x':
       case 'x': base = 16;
   }
   if (n == 0)
    return 0;
   i += to_base(n / base, b);
   tmp = n % base;
   if (rmp < 10)
   {
       _putchar(tmp + 48);
   }
   else if (b == "x")
   {
       _putchar((tmp - 10) + 97);
   }
   else
   {
       _putchar((temp - 10) + 65);
   }
   return i;
}


