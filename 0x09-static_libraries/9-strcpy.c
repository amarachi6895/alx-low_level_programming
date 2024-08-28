#include "main.h"

/**
 * _strcpy - Copies a string pointed to by src to the buffer pointed to by dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: A pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}
