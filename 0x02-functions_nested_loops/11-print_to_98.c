#include "main.h"

/**
 * print_to_98 - function to print natural numbers
 *
 * @n: number which is the lower limit
 *
 * Return: void
 */

void print_to_98(int n)
{
	_putchar(n + '0');
	_putchar(',');
	_putchar(' ');
	if (n == 98)
	{
		_putchar('9');
		_putchcar('8');
		returni;
	}
	else
		print_to_98(n + 1);
}
