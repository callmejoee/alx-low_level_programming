#include "main.h"

/**
 * _sqrt_recursion
 *
 * @n: number
 *
 * Return: the square root
 */

int square_root(int, int);

int _sqrt_recursion(int n)
{
	n = square_root(n, 1);
	if (n == 0)
		return (-1);
	return (n);
}

int square_root(int num, int guess)
{
	if (guess * guess > num)
		return (0);
	if (num == guess * guess)
		return (guess);
	return (square_root(num, guess + 1));
}
