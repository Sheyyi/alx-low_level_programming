#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: String to be encoded.
 *
 * Return: Encoded string.
 */
char *rot13(char *s)
{
	int a, b;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (b < 52)
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
