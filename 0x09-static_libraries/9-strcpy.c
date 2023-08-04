#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: Character pointer to be copied to
 * @src: Character pointer to be copies
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, n;

	l = 0;
	n = 0;

	while (src[l] != '\0')
	{
		l++;
	}
	while (n < l)
	{
		dest[n] = src[n];
		n++;
	}
	dest[l] = '\0';
	return (dest);
}
