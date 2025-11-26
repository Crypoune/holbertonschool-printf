#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format : string
 *
 * Return: number of character printed
*/
int	_printf(const char *format, ...)
{
	int length = 0;
	int i = 0;
	va_list args;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			f = print_format(&format[i + 1]);

			if (f == NULL)
			{
				length += _putchar('%');
				length += _putchar(format[i + 1]);
			}
			else
				length += f(args);
			i++;
		}
		else
		{
			length += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (length);
}
