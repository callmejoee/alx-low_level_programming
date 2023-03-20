#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
