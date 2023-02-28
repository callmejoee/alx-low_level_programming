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


	for (i = 0; i < n - 1; i++)
	{
		while (isdigit((*(a + i))))
		{		
			printf("%d, ", (*(a + i)));
		}
	}
	printf("%d\n", *(a + n - 1));
}
