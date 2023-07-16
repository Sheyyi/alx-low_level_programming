#include <stdio.h>

/**
 * main - Prints the alphabet consecutively in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	char c, n, C;

	n = '\n';
	c = 'a';
	C = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C = C + 1;
	}
	putchar(n);

	return (0);
}
