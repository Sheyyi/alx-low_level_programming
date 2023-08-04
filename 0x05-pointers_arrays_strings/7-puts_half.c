#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Address of string to be printed
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int n, l, i;

	l = 0;
	while (*(str + l) != '\0')
	{
		l++;
	}
	n = l / 2;

	if (l % 2 == 1)
	{
		n = (l + 1) / 2;
	}
	i = n;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
