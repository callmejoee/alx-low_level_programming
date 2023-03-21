#include "dog.h"

/**
 * print_dog - prints dog
 *
 * @d: pointer to struct dog
 *
 * Return: void
 *
 */

void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (d == NULL)
		return;
	if (d->name == NULL)
		name = "(nil)";
	if (d->owner == NULL)
		owner = "(nil)";

	name = d->name;
	age = d->age;
	owner = d->owner;
	if (age == 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", name, owner);
	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
