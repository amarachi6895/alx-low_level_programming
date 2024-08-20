#include "main.h"
#include <stdio.h>

/**
 * print_addition_result - performs addition and prints the result
 * @n: first number
 * @m: second number
 * @res: result buffer
 * @size: buffer size
 */
void print_addition_result(char *n, char *m, char *res, int size)
{
	res = infinite_add(n, m, res, size);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char r[100];
	char r2[10];
	char r3[11];

	print_addition_result(
		"1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458",
		"9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346",
		r, 100
	);

	print_addition_result("1234567890", "1", r2, 10);
	print_addition_result("999999999", "1", r2, 10);
	print_addition_result("999999999", "1", r3, 11);

	return (0);
}
