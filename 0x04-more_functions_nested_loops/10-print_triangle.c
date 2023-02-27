#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size - size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, space;

	for (i = 0; i < size; i++)
	{
		for (space = size - 1; space > i; space--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
