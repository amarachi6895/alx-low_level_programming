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
	long int sum = 2; /* Initialize with 2 because num2 is even */

	while (1)
	{
		next_num = num1 + num2;

		if (next_num > 4000000)
			break;

		if (next_num % 2 == 0)
			sum += next_num;

		num1 = num2;
		num2 = next_num;
	}

	printf("%ld\n", sum);

	return (0);
}
