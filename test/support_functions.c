#include "main.h"

/**
 * validate - confirms if a string contains corect specifiers
 * @s: the string
 * @val: if 1 - only counts the no of characters in s
 * Return: length of string s
 */
unsigned int validate(const char *s, int val)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '%' && val)
		{
			if (s[i++] != '\0' && is_valid(s[i]))
			{
				i++;
				continue;
			}
			exit(134);
		}
		i++;
	}

	return (i);
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
