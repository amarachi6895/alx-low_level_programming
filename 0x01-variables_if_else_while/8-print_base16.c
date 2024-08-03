#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase from 0 to 9
 * and a to f, followed by a new line, using putchar only three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 16; i++)
{
if (i < 10)
{
putchar('0' + i);
}
else
{
putchar('a' + (i - 10));
}
}
putchar('\n');

return (0);
}
