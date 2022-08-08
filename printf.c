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
	unsigned int i, tot = 0;
	va_list args;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == '%')
		{
			if (format[++i] == ' ')
			{
				while (format[i] == ' ')
					i++;
			}
			if (format[i] != '\0')
				tot += print_specifier(format[i], args);
			else
				break;
			continue;
		}
		tot += write(1, (format + i), 1);
	}
	va_end(args);
	return (tot);
}
