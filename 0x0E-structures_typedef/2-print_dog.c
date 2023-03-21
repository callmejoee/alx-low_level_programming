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
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)");
	else
		printf("%s\n", d->name);

	printf("Age: ");
	if (d->age == 0)
		printf("(nil)");
	else
		printf("%f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("%s\n", d->owner);
}
