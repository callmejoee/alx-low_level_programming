#include "main.h"

/**
 * print_last_digit  - function to print last digit duh?
 *
 * @n: the number to check for the last digit
 *
 * @l - last digit
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int l;


	l = (n % 10);
	if (n < 0)
		_putchar(-l + '0');
	else
		_putchar(l + '0');
	if (n >= 0)
		return (n % 10);
	else
		return ((-n % 10));
}
