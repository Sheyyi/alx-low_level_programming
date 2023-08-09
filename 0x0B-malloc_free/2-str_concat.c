#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int l1, l2, l3, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = 0;
	while (s1[l1] != '\0')
		l1++;

	l2 = 0;
	while (s2[l2] != '\0')
		l2++;

	l3 = l1 + l2 + 1;
	str = malloc(sizeof(char) * l3);

	if (str == NULL)
		return (NULL);

	l1 = l2 = i = 0;
	while (s1[l1] != '\0')
	{
		str[i] = s1[l1];
		i++;
		l1++;
	}
	while (s2[l2] != '\0')
	{
		str[i] = s2[l2];
		i++;
		l2++;
	}
	str[i] = '\0';
	return (str);
}
