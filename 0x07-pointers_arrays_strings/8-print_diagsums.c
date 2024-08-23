#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *                  of integers.
 * @a: Pointer to the first element of the square matrix.
 * @size: Size of the matrix (number of rows and columns).
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
	sum1 += a[i * size + i];       /* Sum for the primary diagonal */
	sum2 += a[i * size + (size - i - 1)]; /* Sum for the secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
