#include "main.h"

/**
 * free_grid - function to free memory of a 2d array
 *
 * @grid: grid array
 *
 * @height: size of the array of pointers
 *
 * Return: void
 */


void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
