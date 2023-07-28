#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: String to be capitalized
 *
 * Return: Capitalized string.
 */
char *cap_string(char *s)
{
	int a;

	a = 0;
	while (s[a] < '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			if (s[a - 1] == ' ' ||
				s[a - 1] == '\t' ||
				s[a - 1] == '\n' ||
				s[a - 1] == ',' ||
				s[a - 1] == ';' ||
				s[a - 1] == '.' ||
				s[a - 1] == '!' ||
				s[a - 1] == '?' ||
				s[a - 1] == '"' ||
				s[a - 1] == '(' ||
				s[a - 1] == ')' ||
				s[a - 1] == '{' ||
				s[a - 1] == '}')
			{
				s[a] = s[a] - 32;
				a++;
			}
			else
			{
				a++;
			}
		}
		else
		{
			a++;
		}
	}
	return (s);
}
