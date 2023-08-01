#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Address of Matrix to be used
 * @size: Size of matrix
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum0, sum1, i, j;

	sum0 = 0;
	sum1 = 0;
	i = 0;
	while (i < size)
	{
		sum0 += a[(i * size) + i];
		i++;
	}
	j = size - 1;
	while (j >= 0)
	{
		sum1 += a[(j * size) + (size - j - 1)];
		j--;
	}
	printf("%d, %d\n", sum0, sum1);
}
