#include "main.h"
int _strlen(char *s);
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Character pointer that points to s
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int n, l;

	n = 0;
	l = _strlen(s);
	while (n < l)
	{
		_putchar(*(s + (l - n)));
		n++;
	}
	_putchar('\n');
}
