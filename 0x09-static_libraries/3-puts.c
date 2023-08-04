#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @s: A pointer to the string
 *
 * Returns: nothing
 */
void _puts(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		_putchar(*(s + n));
		n++;
	}
	_putchar('\n');
}
