#include "main.h"

/**
 * reverse_array - reverse array
 *
 * @a: array pointer
 * @n: size of pointer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp, elements;

	i = 0;
	elements = n - 1;
	while (i < ((n + 1) / 2))
	{
		temp = a[i];
		a[i] = a[elements];
		a[elements] = temp;
		elements--;
		i++;
	}
}
