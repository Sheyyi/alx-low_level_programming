#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Make a 2 dimensional array of integers
 * @width: array width
 * @height: array height
 *
 * Return: Pointer to 2 dimensional array, otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
}
