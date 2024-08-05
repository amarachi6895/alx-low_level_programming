#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting integer
 *
 * Description: Numbers are printed in order and separated by a comma
 * and a space. The last number is followed by a newline.
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
}
else
{
for (; n >= 98; n--)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
}
}
