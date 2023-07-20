#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i, n;

	i = 1;
	while (i <= 10)
	{
		n = 97;
		while (n <= 122)
		{
			_putchar(n);
			n += 1;
		}
		_putchar('\n');
		i += 1;
	}
}
