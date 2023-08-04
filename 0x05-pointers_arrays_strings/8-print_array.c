#include "main.h"
#include <stdio.h>

/**
 * print_array - Print elements of an array
 * @a: Address of array to be printed
 * @n: Number of elements to be printed
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < (n - 1))
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}
