#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination where the content is to be copied
 * @src: Source of data to be copied
 * @n: Number of bytes to copy
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
