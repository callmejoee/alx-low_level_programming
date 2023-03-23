#include "function_pointers.h"

/**
 * array_iterator - function that executes a function on array elemnts
 * 
 * @array: array
 *
 * @size: size of array
 *
 * @action: function
 *
 * Return: void
 */

 void array_iterator(int *array, size_t size, void (*action)(int n))
{
	int i;

	for (i = 0; i < n; i++)
	{
		action(array[i]);
	}
}
