#include "main.h"

/**
 * alloc_grid - function to initialize a 2d array
 *
 * @width: first array
 *
 * @height: second array
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(width * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(height * sizeof(int ));
	}
	for (i = 0; i < width; i++)
	{
		if (ptr[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
