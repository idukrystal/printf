#include "main.h"

/**
 * width - get the widh
 * @format:
 * @list:
 * @i:
 *
 * Return: the width
 */

int width(const char *format, int *i, va_list list)
{
	int j, w;

	w = 0;

	for (j = *i + 1; format[j] != '\0'; j++)
	{
		if (is_digit(format[j]))
		{
			w *= 10;
			w += format[j] - '0';
		}
		else if (format[j] == '*')
		{
			j++;
			w = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = j - 1;
	return (0);
}



