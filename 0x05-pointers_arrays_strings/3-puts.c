#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: A pointer to the string
 *
 * Returns: nothing
 */
void _puts(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
