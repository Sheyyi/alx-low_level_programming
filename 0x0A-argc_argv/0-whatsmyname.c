#include "main.h"
#include <stdio.h>

/**
 * main - Prints the programs name
 * @argc: The number of arguments passed
 * @argv: An array of the arguments passed as strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
