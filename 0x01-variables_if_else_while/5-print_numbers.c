#include <stdio.h>

/**
 * main - Prints all single digit base 10 numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n += 1;
	}

	printf("\n");

	return (0);
}
