#include "main.h"

/**
 * print_number - Prints an integer using _putchar function.
 * @n: The integer to print.
 */
void print_number(int n)
{
	int divisor;
	int temp;
	int digit;

	/* Handle negative numbers */
	if (n < 0)
	{
	_putchar('-');
	n = -n; /* convert n to positive */
	}

	/* Handle the case when n is zero */
	if (n == 0)
	{
	_putchar('0');
	return;
	}

	/* Find the highest place value for the integer */
	divisor = 1;
	temp = n;

	while (temp / 10 > 0)
	{
	temp /= 10;
	divisor *= 10;
	}

	/* Print each digit */
	while (divisor > 0)
	{
	digit = n / divisor;

	_putchar(digit + '0');	/* Convert digit to character and print */
	n %= divisor;		/* Remove the highest place value */
	divisor /= 10;		/* Move to the next place value */
	}
}
