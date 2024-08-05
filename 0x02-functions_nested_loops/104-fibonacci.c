#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 * Numbers are separated by a comma, followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2;
	unsigned long int next_num;
	int count;

	printf("%lu, %lu", num1, num2);

	for (count = 2; count < 98; count++)
	{
		next_num = num1 + num2;
		printf(", %lu", next_num);

		num1 = num2;
		num2 = next_num;
	}

	printf("\n");
	return (0);
}
