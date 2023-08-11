#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: Number of bytes of s2 to be addded
 *
 * Return: Pointer to memory space of new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char  *s3;
	unsigned int i, j, l1, l2;

	l1 = 0;
	while (s1[l1] != '\0')
		l1++;

	l2 = 0;
	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		s = malloc(sizeof(char) * (l1 + l2 + 1));
	else
		s = malloc(sizeof(char) * (l1 + n + 1));

	if (s == NULL)
		return (NULL);

	i = j = 0;
	while (i < l1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n >= l2 && i < (l1 + l2))
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	while (n < l2 && i < (l1 + n))
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
