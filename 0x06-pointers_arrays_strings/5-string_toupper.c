#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: A string to be input.
 *
 * Return: Capitalised string
 */
char *string_toupper(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}
		a++;
	}
	return (s);
}
