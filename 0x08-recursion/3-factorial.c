#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The given number input as an integer.
 *
 * Return: The factorial of n as an integer.
 */
int factorial(int n)
{
	int f;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		f = n * facorial(n - 1);
	}
	return (f);
}
