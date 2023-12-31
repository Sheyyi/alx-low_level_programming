#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: Array of characters to be printed
 *
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
