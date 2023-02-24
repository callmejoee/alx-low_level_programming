#include "main.h"

/**
 * print_last_digit  - function to print last digit duh?
 * 
 * @n - the number to check for the last digit
 * 
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	_getchar(n % 10);
	return (n % 10);
}
