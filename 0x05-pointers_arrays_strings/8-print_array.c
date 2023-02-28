#include "main.h"

/**
 * print_array - adjust
 *
 * @a: array
 * @n: array size
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 2; i++)
	{
		printf ("%d, ", (*(a + i)));
	}
	printf("%d\n", *(a + n - 1));
}
