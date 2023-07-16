#include <stdio.h>

/**
 * main - Prints all single digit base 10 numbers
 *
 * Return: 0
 */
int main(void)
{
	char d, n;

	d = 0;
	n = '\n';
	while (d < 10)
	{
		putchar('0' + d);
		d += 1;
	}

	putchar(n);

	return (0);
}
