#include "main.h"

/**
 * create_array - function to create array
 *
 * @size: size of array
 *
 * @c: char to be initialized
 *
 * Return: pointer of type cahr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr = NULL;

	if (size == 1)
		return (ptr);
	ptr = (char *)malloc(size * sizeof(char));
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
