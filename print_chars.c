#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	static char buffer[1024];
	static int i;

	if (c == -1)
	{
		(write(1, buffer, i));
		i = 0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string
 * @s: the string
 * Return: no of chars printed
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

int print_ascii(char *s)
{
	int i = 0;
	int tot = 0;

	while (s[i] != '\0')
        {
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127 )
		{
			tot += _putchar('\\');
			tot += _putchar('x');
			if (s[i] < 16)
				tot += _putchar('0');
			tot += _printf("%X", s[i]);
			i++;
			continue;
		}
                tot += _putchar(s[i]);
                i++;
        }
        return (tot);
}
