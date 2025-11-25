#include "main.h"

/**
 * *print_format - search for the correct function to execute
 * @format : character to check for the corresponding format
 * Return: pointer to the associated function, or NULL if not found
 */
int	(*print_format(const char *format))(va_list)
{
	int	index;
	f_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};

	for (index = 0; formats[index].e; index++)
	{
		if (*format == formats[index].e)
			return (formats[index].f);
	}
	return (NULL);
}
