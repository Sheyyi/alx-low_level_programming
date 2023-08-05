#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change
 * @argc: The number of arguments passed
 * @argv: An array of the arguments passed as strings
 *
 * Return: 0 if exactly one argument is passed, 1 otherwise
 */
int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, l, n, v;

	l = sizeof(coins) / sizeof(coins[0]);
	n = 0;

	if (argc == 2)
		v = atoi(argv[1]);

	if (argc == 2 && v >= 0)
	{
		i = 0;
		while (i < l)
		{
			if (coins[i] > v)
			{
				i++;
			}
			else
			{
				v -= coins[i];
				n++;
			}
		}
		printf("%d\n", n);
	}
	else if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (v < 0)
	{
		printf("%d\n", n);
	}
	return (0);
}
