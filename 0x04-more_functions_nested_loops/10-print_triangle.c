#include <stdio.h>

/**
 * print_triangle - prints a triangle
 *
 * Description: function to print traingle size
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, space;

	for (i = 0; i < size; i++)
	{
		for (space = size - 1; space > i; space--)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("#");
		}
		printf("\n");
	}

}
