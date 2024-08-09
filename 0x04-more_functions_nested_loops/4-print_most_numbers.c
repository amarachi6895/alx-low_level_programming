#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9,
 * except for 2 and 4, followed by a new line.
 */
void print_most_numbers(void)
{
	char numbers[] = "01356789\n";
	char *ptr = numbers;

	/* Use _putchar twice: once in the loop and once for the newline */
	while (*ptr != '\0')
	{
	_putchar(*ptr);
	ptr++;
	}
}
