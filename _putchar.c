#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	// Écris (affiche le 1er caractère, stocké à l'adresse de c, affiche 1 seul caractère)
	return (write(1, &c, 1));
}
