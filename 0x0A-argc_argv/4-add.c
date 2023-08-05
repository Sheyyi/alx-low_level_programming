#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - Checks that a string is a number
 * @s: Address of string to be checked
 *
 * Return: 1 if true, 0 otherwise
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

/**
 * main - Adds positive numbers
 * @argc: The number of arguments passed
 * @argv: An array of the arguments passed as strings
 *
 * Return: 1 if a number contains a symbol that is not a digit, 0 otherwise
 */
int main(int argc, char **argv)
{
	int sum, i, n;

	sum = 0;
	for (i = 1; i < argc; 1++)
	{
		if (is_number(argv[i]))
		{
			n = atoi(argv[i]);
			sum += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
