#include "main.h"

/**
 * print_binary - a function that prints binary after converting it
 *
 * @n: number to convert
 *
 * Return: string containing the binary number
 */

void print_binary(unsigned long int n)
{
	int i;
	int is_msb = 0; /* check if the bit is the most signifcant or not zero */
	unsigned long int length; /* how many bits is the length */

	length = ((sizeof(unsigned long int)) * 8) - 1;

	for (i = length; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			is_msb = 1;
		}
		else if (is_msb == 1 || i == 0)
			_putchar('0');
	}
}
