#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
	int i;
	char digits[21] = "01234567891011121314\n";

	for (i = 0; i < 10; i++)
	{
	char *ptr = digits;

	while (*ptr)
	{
	_putchar(*ptr++);
	}
	}
}
