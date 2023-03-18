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
	int i;

	int *ptr = malloc((width * height) * sizeof(int));

	for (i = 0; i < width * height; i++)
		ptr[i] = 0;
	retrun (ptr);
}
