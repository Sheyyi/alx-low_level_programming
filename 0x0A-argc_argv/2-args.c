#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: The number of arguments passed
 * @argv: An array of the arguments passed as strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
