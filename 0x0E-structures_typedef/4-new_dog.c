#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: Points to the address of s.
 *
 * Return: Integer length of string.
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
		n++;

	return (n);
}

/**
 * _strcpy - Copies a string
 * @dest: Address to be copied to
 * @src: Address to be copied from
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, n;

	l = 0;
	n = 0;

	while (src[l] != '\0')
		l++;

	while (n < l)
	{
		dest[n] = src[n];
		n++;
	}
	dest[l] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the new dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * (l1 + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}

	_strcpy(n_dog->name, name);
	n_dog->age = age;
	_strcpy(n_dog->owner, owner);

	return (n_dog);
}
