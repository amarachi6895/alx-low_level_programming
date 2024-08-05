#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int num1 = 1, num2 = 2;
long int next_num;
int i;

printf("%ld, %ld", num1, num2);

for (i = 2; i < 50; i++)
{
next_num = num1 + num2;
printf(", %ld", next_num);
num1 = num2;
num2 = next_num;
}

printf("\n");

return (0);
}
