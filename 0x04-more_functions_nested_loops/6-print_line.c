#include "main.h"

/**
 * print_line - Draws a straigt line in the terminal.
 * @n: The numnber of times the character '_' should be printed.
 *
 * Description: If n is ) or less, prints only a newline.
 */
void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (n > 0)
	{

	_putchar('_');
	n--;
}

	_putchar('\n');

	}
}
