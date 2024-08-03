#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 from 0 to 9,
 * followed by a new line, without using char variables and using putchar
 * only twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
