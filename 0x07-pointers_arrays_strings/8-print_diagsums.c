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

	i = 0;
	j = 0;
	while (i < size)
	{
		sum0 += a[i][i];
		i++;
	}
	while (i >= 0)
	{
		sum1 += a[i][j];
		j++;
		i--;
	}
	printf("%d, %d\n", sum0, sum1);
}
