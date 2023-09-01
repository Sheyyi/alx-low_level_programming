#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Binary string to be convrted
 *
 * Return: Converted number, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int l, p;
	unsigned int dig = 0;

	if (b == NULL)
		return (0);

	l = 0;
	while (b[l] != '\0')
		l++;

	p = l - 1;
	while (p >= 0)
	{
		if (b[p] == '1')
			dig = (2 * dig) + '1';

		else if (b[p] == '0')
			dig += 0;

		else
			return (0);

		p--;
	}
	return (dig);
}
