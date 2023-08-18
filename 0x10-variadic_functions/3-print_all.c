#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: types of arguments that can be passed
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *st;
	char *separator = "";

	va_start(ap, format);
	i = 0;
	if (format != NULL)
	{
		while (*(format + i) != '\0')
		{
			switch (*(format + i))
			{
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				case 's':
					st = va_arg(ap, char *);
					if (st == NULL)
						st = "(nil)";
					printf("%s%s", separator, st);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
