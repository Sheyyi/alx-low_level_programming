#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: The number of arguments passed
 * @argv: An array of the arguments passed as strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", (argc - 1));

	return (0);
}
