#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int ind, sum = 0, add = 0;

	for (ind = 0; ind < size; ind++)
	{
		sum += a[ind];
		a += size;
	}

	a -= size;

	for (ind = 0; ind < size; ind++)
	{
		add += a[ind];
		a -= size;
	}

	printf("%d, %d\n", sum, add);
}
