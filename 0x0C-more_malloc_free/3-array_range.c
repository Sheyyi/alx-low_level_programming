#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Lowest value in array
 * @max: Highest value in array
 *
 * Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, l;

	if (min > max)
	{
		return (NULL);
	}

	l = (max - min) + 1;
	p = malloc(sizeof(int) * l);

	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
