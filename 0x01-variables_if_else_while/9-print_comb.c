#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers from
 * 0 to 9, separated by a comma and a space, followed by a new line. Uses
 * putchar only four times and does not use any char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar('0' + i);          /* Print the current digit */
if (i < 9)		 /* Print comma and space if not last digit */
{
putchar(',');
putchar(' ');
}
}
putchar('\n');                 /* Print the newline */

return (0);
}
