#include <stdio.h>

/**
 * main - Prints the alphabet consecutively in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char c, n;

	n = '\n';
	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar(n);

	return (0);
}
