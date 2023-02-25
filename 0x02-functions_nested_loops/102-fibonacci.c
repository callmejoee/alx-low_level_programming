#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Fibonacci Sequence
 *
 * Return: void
 */

int fib(int n)
{

	if (n <= 1)
	{
		return (n);
	}
	return fib(n - 1) + fib(n + 2);
}

int main(void)
{
	printf("%d, ", fib(50));
	return (0);
}
