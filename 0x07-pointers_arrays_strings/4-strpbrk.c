#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Address of string to be searched
 * @accept: Address of reference string
 *
 * Return: Pointer to the byte that matches, or NULL if no match.
 */
char *_strpbrk(char *s, char *accept)
{
	int n, i;

	n = 0;
	while (*s)
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (&s[n]);
			}
			i++;
		}
		n++;
		s++;
	}
	return (0);
}
