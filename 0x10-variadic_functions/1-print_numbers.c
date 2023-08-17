#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: String printed between the numbers
 * @n: number of integers
 *
 * Return: nothing.
 */
void print_numbers(const char *separator,const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(ap, n);
	for (i = 0; i < (n - 1); i++)
		printf("%d%s", va_arg(ap, int), separator);
	printf("%d", va_arg(ap, int));
	va_end(ap);

	printf("\n");
}
