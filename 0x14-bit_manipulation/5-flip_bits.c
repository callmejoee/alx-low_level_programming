#include "main.h"

/**
 * flip_bits - function to calculate how many bits need to be flipped
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 *
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	int i, shift;
	unsigned long int result = n ^ m;

	shift = sizeof(unsigned long int) * 8 - 1;

	for (i = shift; i >= 0; i--)
	{
		if ((result >> i) & 1)
			counter++;
	}

	return (counter);
}
