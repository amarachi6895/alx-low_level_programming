#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds and prints the largest prime factor
 * of a number.
 * @n: The number to factorize.
 */
void largest_prime_factor(long n)
{
	long max_factor = -1;
	long i;

	/* Remove factors of 2 */
	while (n % 2 == 0)
	{
	max_factor = 2;
	n /= 2;
	}

	/* Remove factors of odd numbers from 3 upwards */
	for (i = 3; i <= sqrt(n); i += 2)
	{
	while (n % i == 0)
	{
	max_factor = i;
	n /= i;
	}
	}
	/* if n is still greater than 2, then n itself is prime */
	if (n > 2)
	max_factor = n;

	/* Print the largest prime factor */
	printf("%ld\n", max_factor);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 612852475143;

	largest_prime_factor(number);

	return (0);
}
