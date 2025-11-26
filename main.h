#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

/**
 * struct type_format - defines a structure for format specifiers
 * and their associated functions
 *
 * @e: The format specifier (e.g., 'c', 's', '%')
 * @f: The function associated with the specifier
 */
typedef struct type_format
{
	char	e;
	int		(*f)(va_list a);
} f_t;

int _putchar(char c);
int _printf(const char *format, ...);
int	(*print_format(const char *format))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_integer(va_list args);
int print_percent(va_list args);

#endif
