#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Address of string to be searched
 * @needle: Address of string to be found
 *
 * Return: Pointer to start of located substring or NULL if substring
 * not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (haystack != '\0')
	{
		char *a;
		char *b;

		a = haystack;
		b = needle;
		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
