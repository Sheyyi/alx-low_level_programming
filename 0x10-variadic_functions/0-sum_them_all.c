#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Sum all parameters
 * @n: The number of parameters
 *
 * Return: Sum, 0 if n==0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sm;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(sm, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(sm, int);
	va_end(sm);
	return (sum);
}
