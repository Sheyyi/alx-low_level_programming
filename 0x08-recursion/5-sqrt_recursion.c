#include "main.h"
int _sqrt_recursion_real(int n, int c);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The integer to be input
 *
 * Return: natural square root of n.
 */
int _sqrt_recursion(int n)
{
	int s;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		s = _sqrt_recursion_real(n, 0);
	}
	return (s);
}

/**
 * _sqrt_recursion_real - Returns the natural square root of a number
 * @n: THe integer to be input
 * @c: The counter
 *
 * Return: natural square root of n
 */
int _sqrt_recursion_real(int n, int c)
{
	if (c * c > n)
	{
		return (-1);
	}
	else if (c * c == n)
	{
		return (c);
	}
	else
	{
		return (_sqrt_recursion_real(n, c + 1));
	}
}
