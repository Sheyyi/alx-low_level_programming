#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Input number as an integer
 *
 * Return: Last digit of n.
 */
int print_last_digit(int n)
{
	int l, L;

	l = n % 10;
	L = l * -1;
	if (l < 0)
	{
		_putchar(L + 48);
		return (L);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
