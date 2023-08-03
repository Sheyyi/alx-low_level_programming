#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Address of string to be checked
 *
 * Return: Length of string as an integer
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		n += 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
