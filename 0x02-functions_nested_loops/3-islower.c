#include "main.h"
/**
 * _islower - Checks if a number is lowercase
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
