#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Character pointer value
 * @src: Character pointer value
 * @n: Number of bytes from src added as an integer
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
