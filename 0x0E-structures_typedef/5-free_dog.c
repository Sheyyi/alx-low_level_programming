#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dog
 * @d: The dog struct to be freed.
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
