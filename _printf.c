#include "main.h"
#include <stdarg.h>

/**
 * _printf - function entry point
 * @format: string specifier
 * @...: variable argument list
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	unsigned int len = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				len += print_char(args);
			else if (*format == 's')
				len += print_string(args);
			else if (*format == 'i' || *format == 'd')
				len += print_int(args);
			else if (*format == '%')
				len += print_percent(*format);
		}
		else
		{
			_putchar(*format);
			len++;
		}
		format++;
	}
	va_end(args);

	return (len);
}
