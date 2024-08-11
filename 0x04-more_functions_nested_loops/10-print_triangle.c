#include "main.h"

/**
 * print_triangle - Print a right-angled triangle of '#' characters.
 * @size: The height of the triangle.
 *
 * Description:
 * if size is 0 or less, the function prints a newline characterr only.
 * for size greater than 0, it prints a right-angled triangle with the
 * specified number of rows, where each row contains '#' character
 * right-aligned
 */
void print_triangle(int size)
{
	int row, spaces, hashes;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (row = 1; row <= size; row++)
	{
	/* Print leading spaces */
	for (spaces = size - row; spaces > 0; spaces--)
	{
	_putchar(' ');
	}

	/* print '#' characters */
	for (hashes = 1; hashes <= row; hashes++)
	{
	_putchar('#');
	}
	/* Move to the next line */
	_putchar('\n');
	}
}
