#include "dog.h"

/**
 * new_dog - function to add new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to dog struct
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	new_dog = malloc(sizeof(dog_t));
	
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
