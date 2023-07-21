#include "main.h"
/**
 * more_numbers - Prints the numbers 0 to 14 followed by a new line ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int l, N;

	l = 0;
	N = 0;
	while (l < 10)
	{
		while (N < 15)
		{
			if (N >= 10)
			{
				_putchar(N / 10 + '0');
			}
			_putchar(N % 10 + '0');
		}
		_putchar('\n');
	}
}
