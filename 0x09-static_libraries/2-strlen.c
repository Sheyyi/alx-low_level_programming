#include "main.h"

/**
 * _strlen - returns tthe length of a string.
 * @s: Character that points to s.
 *
 * Return: Integer legth on string.
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}
