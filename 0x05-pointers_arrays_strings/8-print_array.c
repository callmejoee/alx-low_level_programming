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

	if (sizeof(a) / sizeof(int) == n)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", (*(a + i)));
		}
	}
	printf("%d\n", *(a + n - 1));
}
