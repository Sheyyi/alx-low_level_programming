#include "main.h"
int is_prime(int n, int c);

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: Integer to be checked
 *
 * Return: 1 if integer is prime, 0 othrewise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, n - 1));
	}
}

/**
 * is_prime - Checks if an integer is a prime number
 * @n: Integer to be checked
 * @c: The counter
 *
 * Return: 1 if integer is prime, 0 otherwise.
 */
int is_prime(int n, int c)
{
	if (c == 1)
	{
		return (1);
	}
	else if (n % c == 0 && c > 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, c - 1));
	}
}
