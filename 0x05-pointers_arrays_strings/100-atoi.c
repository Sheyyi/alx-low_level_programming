#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: Address of string to be converted
 *
 * Return: String as an integer
 */
int _atoi(char *s)
{
	int i, m, p, l, f, d;

	i = 0;
	m = 0;
	p = 0;
	l = 0;
	f = 0;
	d = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	while (i < l && f == 0)
	{
		if (s[i] == '-')
		{
			m++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (m % 2)
			{
				d = -d;
			}
			p = (p * 10) + d;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);
	return (p);
}
