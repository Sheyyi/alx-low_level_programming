#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 * @array: Array to be searched
 * @size: number or elements in the array
 * @cmp:Pointer to function that compares values
 *
 * Return: Index of element for which cmp does not return 0, -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
		i++;
	}
	return (-1);
}
