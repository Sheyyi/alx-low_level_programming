#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: Input number as an integer
 *
 * Return: Absolute value of n.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
