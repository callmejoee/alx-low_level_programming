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
		_putchar('9');
		_putchar('8');
	}
	else if (n > 98)
	{      
		if (n > 9)
		{
		       	_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else if (n < 9)
		{
			_putchar(n);
		}
		print_to_98(n - 1);
	}
	else if (n < 98)
	{
		if (n > 9)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else if (n < 9)
		{
			 _putchar(n);
		}
		print_to_98(n + 1);
	}
}
