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
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = a[n - i];
	}
}
