#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: string
 * @box: variable that stock functions
 *
 * Return: number of character printed
*/
int	_printf(const char *format, ...)
{
	int length = 0;
	int i = 0;
	va_list args;
	int (*box)(va_list);


	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}

			box = print_format(&format[i + 1]);

			if (box == NULL)
			{
				length += _putchar('%');
				length += _putchar(format[i + 1]);
			}
			else
				length += box(args);

			i += 2;
			continue;
		}
		length += _putchar(format[i]);
		i++;
	}

	va_end(args);
	return (length);
}
