#include "main.h"

/**
 * swap_int - swaps to pointers
 *
 * @a: first variable
 * @b: second variable
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
