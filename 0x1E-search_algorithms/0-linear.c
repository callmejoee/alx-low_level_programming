#include "search_algos.h"

/**
 * linear_search - this function searches an array linearly
 * @array: array ptr
 * @size: size of the array
 * @value: value to be searched for
 * Return: index of @value or -1 if not found
 *
 */

int linear_search(int *array, size_t size, int value)
{
	int isFound;
	int i;

	if (!array)
		return (-1);

       	isFound = 0;

	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %d\n", value, i);
			isFound = 1;
			break;
		}
	}

	if (isFound)
		return (i);
	return (-1);
}
