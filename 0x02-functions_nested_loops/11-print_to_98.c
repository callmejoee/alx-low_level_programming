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

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		printf("%d, ", n);
		print_to_98(n - 1);
	}
	else if (n < 98)
	{
		printf("%d, ", n);
		print_to_98(n + 1);
	}
}
