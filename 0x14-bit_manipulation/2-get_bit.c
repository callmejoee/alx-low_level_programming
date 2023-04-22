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
	return (((n >> index) & 1));
}

