#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 *
 * @n: Number of times the line is printed as an integer
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int l;
	int s;

	l = 1;
	while (l > 0 && l <= n)
	{
		s = 1;
		while (s < l)
		{
			_putchar(' ');
			s++;
		}
		_putchar('\\');
		_putchar('\n');
		l++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
