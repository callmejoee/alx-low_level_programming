#include "main.h"

/**
 * get_bit - function to get the bit at a given index
 *
 * @n: number
 * @index: index of the bit 
 *
 * Return: 0 or 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (ULONG_MAX < n || n < 0 || index > 32 || index < 0)
		return (-1);
	return (((n >> index) & 1));
}
