#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 * @d: struct do to be printed
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		print('\n');

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n"' d->name);
	printf("Age: %d\n"' d->age);
	printf("Owner: %s\n"' d->owner);
}
