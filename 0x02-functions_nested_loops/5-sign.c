#include "main.h"

/**
 * print_sign - function to check the sign of a number and print it 
 *
 * @n: the number to be checked
 *
 * Return: 0 if zero -1 if negative and 1 if positive
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (0);
}
