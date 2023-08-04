#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: address of memory to be copied to
 * @src: address of memory to be copied
 * @n: amount of memory to be copied from src
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
