#include "main.h"
#include <stdlib.h>

/**
 * _memset - Fills memory with a constant byte.
 * @s: address to be filled
 * @b: The value to be filled in.
 * @n: Number of bytes of memory to be filled.
 *
 * Return: Pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each elements
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		_memset(p, 0, nmemb * size);
	}
	return (p);
}
