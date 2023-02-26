#include "main.h"

/**
 * print_diagonal - function to multiply
 * @n: first num
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n >= 0)
	{
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < i; j++)
			{
				_putchar(' ');
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
