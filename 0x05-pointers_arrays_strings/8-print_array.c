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
		_putchar(*(a + i) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar(*( a + n - 1) + '0');
	_putchar('\n');
}
