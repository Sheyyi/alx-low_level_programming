#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Address of string to be reversed
 *
 * Return: 0
 */
void rev_string(char *s)
{
	char r = s[0];
	int l, n;

	l = 0;
	n = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	while (n < l)
	{
		l--;
		r = s[n];
		s[n] = s[l];
		s[l] = r;
		n++;
	}
}
