#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits,
 * in ascending order, separated by a comma and a space. Only the smallest
 * combination of two digits is printed. Uses putchar exactly five times
 * and does not use any char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 8; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar('0' + i);  /* Print the first digit */
putchar('0' + j);  /* Print the second digit */
if (i != 8 || j != 9)  /* Print comma and space if not the last combination */
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');  /* Print newline at the end */

return (0);
}
