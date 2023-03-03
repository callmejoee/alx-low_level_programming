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
	int i, temp;

	i = 0;
	while (i != (n / 2))
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
		i++;
	}
}
