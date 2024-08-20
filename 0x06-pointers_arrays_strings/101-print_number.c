#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
unsigned int num;

	/* Handle negative numbers */
	if (n < 0)
		{
		_putchar('-');
		num = -n;
		}
	else
		{
		num = n;
		}

	/* Recursive division to isolate each digit */
	if (num / 10)
		{
		print_number(num / 10);
		}

	/* Print the digit */
		_putchar((num % 10) + '0');
}
