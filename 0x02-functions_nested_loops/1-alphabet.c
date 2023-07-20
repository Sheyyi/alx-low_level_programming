#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int n;

	n = 97;
	while (n <= 122)
	{
		_putchar(n);
		n += 1;
	}
	_putchar('\n');
}
