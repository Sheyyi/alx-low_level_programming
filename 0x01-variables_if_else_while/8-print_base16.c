#include <stdio.h>

/**
 * main - Prints all base 16 numbers in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int d;

	d = 0x0;
	while (d <= 0xf)
	{
		putchar("0x0" + d);
		d += 0x1;
	}

	putchar('\n');

	return (0);
}
