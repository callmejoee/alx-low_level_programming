#include "main.h"

/**
 * is_prime_number - function to check if prime
 *
 * @n: number to check
 *
 * Return: 1 if prome 0 if not
 *
 */
int is_prime(int, int);

int is_prime_number(int n)
{
	n = is_prime(n, 2);
	return (n);
}

/**
 * is_prime - function to check
 * @number: number
 *
 * @index: counter
 *
 * Return: 0 if not prime 1 if else
 */

int is_prime(int number, int index)
{
	if (number < index)
		return (0);
	if (number % index == 0)
		return (1);
	return (is_prime(number, index + 1));
}
