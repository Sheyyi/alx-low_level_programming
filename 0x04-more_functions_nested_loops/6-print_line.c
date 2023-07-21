#include "main.h"

/**
 * print_line - Draws a straight line
 *
 * @n: Number of times the character should be printed as an integer
 *
 * Return: 0
 */
void print_line(int n)
{
	int l;

	l = 1;
	while (l > 0 && l <= n)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');
}
