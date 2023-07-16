#include <stdio.h>

/**
 * main - Prints the lowercase alphabet consecutively in reverse
 *
 * Return: 0
 */
int main(void)
{
	char c, n;

	n = '\n';
	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar(n);

	return (0);
}
