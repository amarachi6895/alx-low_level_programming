#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to use from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;
	while (n-- > 0 && *src)
		*ptr++ = *src++;
	*ptr = '\0';

	return (dest);
}
