#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Address of string to be printed
 *
 * Return: 0
 */
void puts2(char *str)
{
	int n, l, i;

	l = 0;
	while (*(str + l) != '\0')
	{
		l++;
	}
	n = l - 1;
	i = 0;
	while (i <= n)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
