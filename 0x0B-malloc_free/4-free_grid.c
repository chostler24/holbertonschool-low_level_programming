#include "main.h"
#include <stdlib.h>

/**
  * free_grid - function that frees a 2 dimensional grid
  * previously created by the alloc_grid function.
  * @grid: integer
  * @height: integer
  * Return: none
  */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
