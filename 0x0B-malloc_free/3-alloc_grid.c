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
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free (ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		for (j = 0; j < height * width ; j++)		
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
