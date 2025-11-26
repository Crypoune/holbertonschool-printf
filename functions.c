#include "main.h"

/**
 * print_char - function that print a character
 * @args: argument list
 * Return: char
 */
int	print_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - function that print a string
 * @args : argument list
 * Return: the length of the string
 */
int	print_string(va_list args)
{
	int	i;
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * print_percent - function that print character '%'
 * @args : arguments list
 * Return: character '%'
*/
int	print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
