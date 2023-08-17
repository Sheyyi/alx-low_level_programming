#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - Print strings followed by a new line
 * @separator: string printed between the strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL || n == 0)
		return;

	va_start(ap, n);
	for (i = 0; i < (n - 1); i++)
	{
		if (va_arg(ap, char *) == NULL)
			printf("(nil)%s", separator);

		else
			printf("%s%s", va_arg(ap, char *), separator);
	}
	printf("%s", va_arg(ap, char *));
	va_end(ap);

	printf("\n");
}
