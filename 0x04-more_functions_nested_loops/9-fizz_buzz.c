#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 * This program prints the numbers from 1 to 100. For each number:
 * - Print "Fizz" if the number is divisible by 3,
 * - Print "Buzz" if the number is divisible by 5,
 * - Print "FizzBuzz" if the number is divisible by both 3 and 5,
 * - Print the number itself if none of the above conditions are met.
 * Numbers or words are separated by a space. The output ends with a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", i);
	}
	if (i < 100)
	{
	printf(" ");
	}
	}
	printf("\n");

	return (0);
}
