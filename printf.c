#include "main.h"

/**
 * _printf - prints a formated string
 * @format: the formated string
 *
 *
 * Return: no of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, tot = 0;
	va_list args;
	flags f = {0, 0, 0};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == '%')
		{
			if ((is_flag(format[++i], &f)))
			{
				while (is_flag(format[i], &f))
					i++;
			}
			if (format[i] != '\0')
				tot += print_specifier(format[i], args, &f);
			else
				return (tot);
			continue;
		}
		tot += _putchar(format[i]);
	}
	_putchar(-1);
	va_end(args);
	return (tot);
}
