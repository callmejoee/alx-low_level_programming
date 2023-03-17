#include "main.h"

int square_root(int, int);

/**
 * _sqrt_recursion
 *
 * @n: number
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	n = square_root(n, 1);
	if (n == 0)
		return (-1);
	return (n);
}

/**
 * square_root - sub function
 *
 * @num: number
 *
 * @guess: index
 *
 * Return: return number
 */

int square_root(int num, int guess)
{
	if (guess * guess > num)
		return (0);
	if (num == guess * guess)
		return (guess);
	return (square_root(num, guess + 1));
}
