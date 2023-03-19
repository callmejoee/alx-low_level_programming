#include "main.h"

/**
 * alloc_grid - function to make a 2d array
 *
 * @width: the array
 * @height: the array inside the array
 *
 * Return: 2d array
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		ptr[i] = malloc(height * sizeof(int));

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	return (ptr);
}
