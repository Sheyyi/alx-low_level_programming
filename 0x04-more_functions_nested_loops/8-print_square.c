#include "main.h"

/**
 * print_square - Prints a square followed by a new line
 *
 * @size: The size of the square as an integer
 *
 * Return: 0
 */
void print_square(int size)
{
	int l1, l2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l1 = 0; l1 < size; l1++)
		{
			for (l2 = 0; l2 < size; l2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
