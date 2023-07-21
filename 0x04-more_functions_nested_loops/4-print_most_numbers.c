#include "main.h"
/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		if (n == 50 || n == 52)
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
		n += 1;
	}
	_putchar('\n');
}
