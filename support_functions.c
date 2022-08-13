#include "main.h"
/**
 * _strlen  - computes length of a string
 * @s: the string
 * Return: length of string s
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * is_flag - checks if a char is a valid flag
 * @c: the char
 * @f: the flags
 * Return: 1 if it is 0 if not
 */
int is_flag(char c, flags *f)
{
	if (is_digit(c))
	{
		return (1);
	}
	switch (c)
	{
	case ' ':
		f->space = 1;
		return (1);
	case '+':
		f->plus = 1;
		return (1);
	case '#':
		f->hash = 1;
		return (1);
	case 'l':
		f->l = 1;
		return (1);
	case 'h':
		f->h = 1;
		return (1);
	case '*':
		return (1);
	}
	return (0);
}

/**
 * is_valid - checks if a specifier is supported
 * @c: the specifier
 * Return: 1 if supported 0 if not
 */
int is_valid(char c)
{
	char *sub = "cs%";
	int i;

	for (i = 0; i < 3; i++)
	{
		if (c == sub[i])
			return (1);
	}
	return (0);
}
/**
 * is_digit - check digits
 * @c: character
 *
 * Return: c
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * set_width - set width
 * @format: format string
 * @i: integer
 * @j: integer
 * @f: pointer f
 */
void set_width(const char *format, int i, int j, flags *f)
{
	unsigned int tens = 1, num = 0;
	int c;

	if (!(j > i))
		return;
	for (c = j - 1; c >= i; c--, tens *= 10)
		num += (to_int(format[c]) * tens);
	f->width = num;
}
