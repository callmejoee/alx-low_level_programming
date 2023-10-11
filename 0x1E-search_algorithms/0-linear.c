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
	if (!array)
		return (-1);

	int i, isFound = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %d", value, i);
			isFound = 1;
			break;
		}
	}

	if (isFound)
		return (i);
	return (-1);
}
