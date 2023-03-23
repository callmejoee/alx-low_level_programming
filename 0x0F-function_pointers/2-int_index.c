#include "function_pointers.h"

/**
 * int_index - function to look for number in an integer
 *
 * @array: array pointer
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: return index if correct else return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	else if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
