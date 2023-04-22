#include "main.h"

/**
 * set_bit - funciton to set the bit in the index given to one
 *
 * @n: number
 * @index: index
 *
 * Return: 1 (Success) else return -1
 */

int clear_bit(unsigned long int *n, unsigned int index);
{
	if (*n > ULONG_MAX || index > (sizeof(unsigned long int) * 8))
		return (-1);
	(*n) &= (0 << index);
	return (1);
}
