#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Address of memory compared to
 * @accept: Address of memory to be compared
 *
 * Return: number of bytes similar.
 */
unsigned int _strspn(char *s, char *accept)
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
				n++;
				break;
			}
			i++;
		}
		s++;
	}
	return (n);
}
