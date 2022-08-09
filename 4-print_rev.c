#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: no of chars printed
 */
int print_rev(char *s)
{
	int len = _strlen(s);
	int tot = 0;

	while (len >= 1)
	{
		tot += _putchar(s[len - 1]);
		len--;
	}
	return (tot);
}
