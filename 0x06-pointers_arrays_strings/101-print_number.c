#include "main.h"

/**
 * print_number - prints number
 *
 * @n: number
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (num == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10)
		print_number(num / 10);

	if (num != 0)
		_putchar((num % 10) + '0');
}
