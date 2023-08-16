#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize struct dog
 * @d: Struct name
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
