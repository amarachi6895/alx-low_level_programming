#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to be appended from src
 *
 * Description: This function appends the src string to the dest string,
 * using at most n bytes from src. If src is longer than n bytes,
 * it does not need to be null-terminated. The function returns a pointer
 * to the resulting dest string.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append src to dest, using at most n bytes */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add the terminating null byte */
	dest[i] = '\0';

	return (dest);
}
