#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 *
 * Description: This function calculates and prints the first 98
 * Fibonacci numbers, starting with 1 and 2, separated by a comma
 * and a space.
 */
void print_fibonacci(void)
{
	unsigned long int num1 = 1, num2 = 2;
	unsigned long int next_num;
	unsigned long int num1_high, num1_low, num2_high, num2_low, high, low;
	int count;

	printf("%lu, %lu", num1, num2);

	for (count = 2; count < 98; count++)
	{
		if (num1 + num2 < num1)
		{
			num1_high = num1 / 1000000000;
			num1_low = num1 % 1000000000;
			num2_high = num2 / 1000000000;
			num2_low = num2 % 1000000000;

			high = num1_high + num2_high;
			low = num1_low + num2_low;

			if (low >= 1000000000)
			{
				high += 1;
				low -= 1000000000;
			}
			printf(", %lu%09lu", high, low);

			num1 = num2;
			num2 = high * 1000000000 + low;
		}
		else
		{
			next_num = num1 + num2;
			printf(", %lu", next_num);

			num1 = num2;
			num2 = next_num;
		}
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci();
	return (0);
}
