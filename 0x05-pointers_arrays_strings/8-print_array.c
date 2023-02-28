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
	long int num;

	for (i = 0; i < n - 2; i++)
	{
		printf ("%p, ", (*(a + i));
	}
	printf("%p\n", *(a + n - 1));
}
