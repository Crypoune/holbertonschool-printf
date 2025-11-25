#include "main.h"

/**
 * print_c - imprime un caractère
 * @args: liste d'arguments variadiques
 *
 * Return: nombre de caractères imprimés
 */
int print_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);

	return (1);
}
