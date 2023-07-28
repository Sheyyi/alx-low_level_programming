#include "main.h"

/**
 * leet - Encodes a string into leetspeak
 * @s: The string to be encoded
 *
 * Return: The encoded string.
 */
char *leet(char *s)
{
	int a, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (b < 10)
		{
			if (s[a] == s1[b])
			{
				s[a] = s2[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
