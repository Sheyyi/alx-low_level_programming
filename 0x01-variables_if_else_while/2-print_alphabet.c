#include <stdio.h>

/**
 * main -
 *
 * Return:
 */
int main(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		putchar(c);
		putchar("\n");
		c = c+1;
	}

	return(0);
}
