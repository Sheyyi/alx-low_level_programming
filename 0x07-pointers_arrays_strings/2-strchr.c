#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Address of memory to search
 * @c: Chracter to search for
 *
 * Return: pointer to first occurrence of c.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
