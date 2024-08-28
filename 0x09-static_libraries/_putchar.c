#include "main.h"

/**
 * _putchar - checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _putchar(char c);
{
	return (write(1, &c, 1));
}

