#include "dog.h"

/**
 * init_dog - function to initialize dog
 *
 * @d: pointer to struct of type dog
 * @name: pointer to array of char
 * @age: age of the dog
 * @owner: dog owner
 * 
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
