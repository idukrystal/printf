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

int is_flag(char c, flags *f)
{
	switch (c)
	{
	case ' ': f->space = 1;
		return (1);
	case '+': f->plus = 1;
		return (1);
	case '#': f->hash = 1;
		return (1);
	}
	return 0;
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
