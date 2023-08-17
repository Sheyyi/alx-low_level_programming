#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element to an array
 * @array: Array to be used
 * @size: size of the array
 * @action: function to be executed
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	i = 0;
	while (i < size)
	{
		action(*(array + i));
		i++;
	}
}
