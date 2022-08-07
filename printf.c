#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a formated string
 * @format: the formated string
 *
 * Return: no of characters printed
 */
int _printf(const char *format, ...)
{
	int len = validate(format, 0);
	int i, tot = 0;
	char tmp;
	va_list args;

	va_start(args, format);
	for (i = 0; i < len; i++)
	{
		tmp = format[i];

		if (tmp == '%')
		{

		}
		tot += write(1, &tmp, 1);
	}
	va_end(args);
	return (tot);
}
