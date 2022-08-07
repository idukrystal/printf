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
	unsigned int len;
	unsigned int i, tot = 0;
	char tmp;
	char *tmp_string;
	va_list args;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	len = validate(format, 0);
	va_start(args, format);
	
	for (i = 0; i < len; i++)
	{
		tmp = format[i];

		if (tmp == '%')
		{
			if (format[++i] == ' ')
			{
				while (format[i] == ' ')
					i++;
			}
			switch (format[i])
			{
			case 'c':
				tmp = va_arg(args, int);
				break;
			case 's':
				tmp_string = va_arg(args, char*);
				tot += write(1, tmp_string, validate(tmp_string, 0));
				continue;
			case '%':
				tmp = '%';
				tot += write(1, &tmp	\
, 1);
				continue;
			default:
				tmp = '%';
				tot += write(1, &tmp, 1);
				tmp = format[i];
				tot += write(1, &tmp, 1);
				continue;
			}
		}
		tot += write(1, &tmp, 1);
	}
	va_end(args);
	return (tot);
}
