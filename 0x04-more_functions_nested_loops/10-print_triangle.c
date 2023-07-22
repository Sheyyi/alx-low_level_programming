#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line.
 *
 * @size: THe size of the triangle as an integer.
 *
 * Return: 0.
 */
void print_triangle(int size)
{
	int i, s, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= size)
		{
			s = size - i;
			while (s > 0)
			{
				_putchar(' ');
				s--;
			}
			h = 1;
			while (h <= i)
			{
				_putchar('#');
				h++;
			}
			_putchar('\n');
			i++;
		}
	}
}
