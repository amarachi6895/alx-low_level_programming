#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the buffer to fill
 * @b: the constant byte
 * @n: the number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
		s[p] = b;

	return (s);
}
