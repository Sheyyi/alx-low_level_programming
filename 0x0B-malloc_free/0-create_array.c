#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it
 * with a special char
 * @size: Size of array
 * @c: character to be initialized with
 *
 * Return: Pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
	}
	return (s);
}
