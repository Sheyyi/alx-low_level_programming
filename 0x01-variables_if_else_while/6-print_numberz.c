#include <stdio.h>

/**
 * main - Prints all single digit base 10 numbers
 *
 * Return: 0
 */
int main(void)
{
	int d;

	d = 0;
	while (d < 10)
	{
		putchar('0' + d);
		d += 1;
	}

	putchar('\n');

	return (0);
}
