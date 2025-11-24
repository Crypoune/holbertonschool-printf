#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * print_s - print a string
 * @str: the string to print
 * Return: the number of characters printed.
 */
int print_s(const char *str)
{

	int n; /* nbr caractères écris */

	if (str == NULL)
	{
		/* Si str est NULL afficher (null) et retourner 6 */
		n = write(STDOUT_FILENO, "(null)", 6);
	}
	else
	{
		n = write(STDOUT_FILENO, str, strlen(str));
	}
	return (n);
}
