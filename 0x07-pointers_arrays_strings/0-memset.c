#include "main.h"

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
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
