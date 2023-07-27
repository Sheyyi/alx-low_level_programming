#include "main.h"

/**
 * _strncpy - Copies a strings
 * @dest: Character pointer value
 * @src: Character pointer value
 * @n: Number of bytes from src copied as an integer
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0'
		a++;
	}

	return (dest);
}
