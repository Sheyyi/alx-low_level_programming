#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	int i;

	i = n;
	if (i < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i /10);
	}
	_putchar((i %10) + '0');
}
