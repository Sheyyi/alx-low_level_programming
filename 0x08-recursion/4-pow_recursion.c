#include "main.h"

/**
 * _pow_recursion - Returns the value of a number raised to the power
 * of another
 * @x: The number to be raised
 * @y: The power to be raised by
 *
 * Return: x raised to thr power of y as an integer.
 */
int _pow_recursion(int x, int y)
{
	int p;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		p = x * _pow_recursion(x, y - 1);
	}
	return (p);
}
