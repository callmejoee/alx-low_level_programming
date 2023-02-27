#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
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
