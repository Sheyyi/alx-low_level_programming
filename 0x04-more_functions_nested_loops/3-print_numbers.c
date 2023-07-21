#include "main.h"
/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		_putchar(n);
		n += 1;
	}
	_putchar('\n');
}
