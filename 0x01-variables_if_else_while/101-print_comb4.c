#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits in
 * ascending order, separated by ", " and followed by a newline. Each digit
 * combination is printed only once, and no variables of type char are used.
 * Uses putchar a maximum of six times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;

for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{
putchar('0' + i);  /* Print the first digit */
putchar('0' + j);  /* Print the second digit */
putchar('0' + k);  /* Print the third digit */

if (!(i == 7 && j == 8 && k == 9))  /* If not the last combination */
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');  /* Print the newline character */

return (0);
}
