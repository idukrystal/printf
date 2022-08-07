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
	unsigned int len = validate(format, 0);
	unsigned int i, tot = 0;
	char tmp;
	char *tmp_string;
	va_list args;

	va_start(args, format);
	for (i = 0; i < len; i++)
	{
		tmp = format[i];

		if (tmp == '%')
		{
			switch (format[++i])
			{
			case 'c':
				tmp = va_arg(args, int);
				break;
			case 's':
				tmp_string = va_arg(args, char*);
				write(1, tmp_string, validate(tmp_string, 0));
				continue;
			}
		}
		tot += write(1, &tmp, 1);
	}
	va_end(args);
	return (tot);
}
