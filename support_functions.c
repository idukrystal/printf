#include "main.h"

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

int is_valid(char c)
{
	char *sub= "cs";
	int i;

	for (i = 0; i < 2; i++)
	{
		if (c == sub[i])
			return (1);
	}
	return (0);
}
