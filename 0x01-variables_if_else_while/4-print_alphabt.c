#include <stdio.h>

/**
 * main - Prints the alphabet except fot q and e consecutively in lowercase
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
		if (c == 'q')
		{
			c = c + 1;
		}
		else if (c == 'e')
		{
			c = c + 1;
		}
		else
		{
			putchar(c);
			c = c + 1;
		}
	}
	putchar(n);

	return (0);
}
