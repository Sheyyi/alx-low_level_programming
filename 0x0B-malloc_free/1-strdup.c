#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Copies a string to a newly allocated space in memory
 * @str: String to be copied
 *
 * Return: Pointer to new string, NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *s;
	int l, i;

	if (str == NULL)
	{
		return (NULL);
	}
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
