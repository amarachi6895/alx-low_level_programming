#include "main.h"
#include <limits.h> /* For INT_MIN and INT_MAX */

/**
 * print_number - Prints an integer using _putchar function.
 * @n: The integer to print.
 */
void print_number(int n)
{
	int divisor;
	int temp;
	int digit;

	if (n == INT_MIN)
	{
	_putchar('-');
	_putchar('2');
	n = 147483648; /* Remaining part after "-2" */
	}

	if (n < 0)
	{
	_putchar('-');
	n = -n; /* convert n to positive */
	}

	if (n == 0) /* Handle the case when n is zero */
	{
	_putchar('0');
	return;
	}
	divisor = 1;	/* Find the highest place value for the integer */
	temp = n;

	while (temp / 10 > 0)
	{
	temp /= 10;
	divisor *= 10;
	}
	while (divisor > 0)	/* Print each digit */
	{
	digit = n / divisor;
	_putchar(digit + '0');	/* Convert digit to character and print */
	n %= divisor;		/* Remove the highest place value */
	divisor /= 10;		/* Move to the next place value */
	}
}
