#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: an array of integers
 * @n: the nuber of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int e;

	i = 0;
	while (i < n)
	{
		e = a[i];
		a[i] = a[n];
		a[n] = e;
		n--;
		i++;
	}
}
