#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: The number of arguments passed
 * @argv: An array of the arguments passed as strings
 *
 * Return: 0 if correct number of arguments are passed, otherwise 1
 */
int main(int argc, char **argv)
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
