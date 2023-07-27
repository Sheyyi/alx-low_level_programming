#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Character pointer value
 * @s2: Character pointer value
 *
 * Return: Integer that shows the difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int d;

	a = 0;
	d = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			d = d + (s1[a] - s2[a]);
		}
		a++;
	}
	return (d);
}
