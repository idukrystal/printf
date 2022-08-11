#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to code
 *
 * Return: pointer to encoded @s
 */
int rot13(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		_putchar(rot(s[i]));

	}
	return (i);
}

/**
 * rot - encods a char to rot13
 * @c: the char
 *
 * Return: rot13 char of @c
 */
char rot(char c)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rots[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIGKLM";
	int i = 0;

	for (; i < 52; i++)
	{
		if (alpha[i] == c)
			return (rots[i]);
	}
	return (c);
}
