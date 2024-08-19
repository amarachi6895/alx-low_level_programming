#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to be copied from src
 *
 * Description: This function copies up to n bytes from the string src to dest.
 * If the length of src is less than n, the remainder of dest will be padded
 * with null bytes. The function behaves similarly to the standard strncpy.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy src to dest up to n characters */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Pad the remainder of dest with null bytes if src is shorter than n */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
