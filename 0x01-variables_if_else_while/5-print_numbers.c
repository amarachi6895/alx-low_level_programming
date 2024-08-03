#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 from 0 to 9,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);
}
