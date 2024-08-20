#include <stdio.h>
#include "main.h"

/**
 * print_hex - prints the hexadecimal representation of the buffer
 * @b: pointer to the buffer
 * @start: start index in the buffer
 * @size: total size of the buffer
 */
static void print_hex(char *b, int start, int size)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (start + j < size)
		{
			printf("%02x", (unsigned char)b[start + j]);
		}
		else
		{
			printf("  ");
		}

		if (j % 2 != 0)
		{
			printf(" ");
		}
	}
}

/**
 * print_chars - prints the ASCII representation of the buffer
 * @b: pointer to the buffer
 * @start: start index in the buffer
 * @size: total size of the buffer
 */
static void print_chars(char *b, int start, int size)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (start + j < size)
		{
			if (b[start + j] >= 32 && b[start + j] <= 126)
			{
				printf("%c", b[start + j]);
			}
			else
			{
				printf(".");
			}
		}
	}
}

/**
 * print_buffer - prints the content of a buffer
 * @b: pointer to the buffer
 * @size: number of bytes to print from the buffer
 *
 * Description: Prints the content of the buffer pointed by b,
 * with 10 bytes per line.
 * Each line starts with the position of the first byte
 * of the line in hexadecimal, followed by
 * the hexadecimal content of the buffer,
 * and finally the printable ASCII characters.
 */
void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print the position */
		printf("%08x: ", i);

		/* Print the hexadecimal content */
		print_hex(b, i, size);

		/* Print the printable characters */
		print_chars(b, i, size);

		printf("\n");
	}
}
