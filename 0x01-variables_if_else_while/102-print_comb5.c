#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * Each combination is separated by ", " and numbers are printed with
 * two digits.
 * Combinations are printed in ascending order and no char variables are used.
 * Uses putchar a maximum of eight times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
/* Print the first number */
putchar('0' + (i / 10));
putchar('0' + (i % 10));
putchar(' ');

/* Print the second number */
putchar('0' + (j / 10));
putchar('0' + (j % 10));

/* Print separator */
if (!(i == 98 && j == 99))
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n'); /* Newline character */

return (0);
}
