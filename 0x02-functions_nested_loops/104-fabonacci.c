#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int f1 = 1, f2 = 2, next;
	unsigned long int f1_high, f1_low, f2_high, f2_low;
	unsigned long int high, low;
	int count;

	printf("%lu, %lu", f1, f2);
	for (count = 2; count < 98; count++)
	{
		if (f1 + f2 > 0 && f2 > f1)
		{
			next = f1 + f2;
			f1 = f2;
			f2 = next;
			printf(", %lu", next);
		}
		else
		{
			f1_high = f1 / 1000000000;
			f1_low = f1 % 1000000000;
			f2_high = f2 / 1000000000;
			f2_low = f2 % 1000000000;
			high = f1_high + f2_high;
			low = f1_low + f2_low;
			if (low >= 1000000000)
			{
				high += 1;
				low -= 1000000000;
			}
			printf(", %lu%09lu", high, low);
			f1_high = f2_high;
			f1_low = f2_low;
			f2_high = high;
			f2_low = low;
			f1 = f1_high * 1000000000 + f1_low;
			f2 = f2_high * 1000000000 + f2_low;
		}
	}

	printf("\n");
	return (0);
}

