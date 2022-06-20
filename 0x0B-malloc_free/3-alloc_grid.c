#include "main.h"
#include <stdlib.h>

/**
  * **alloc_grid - function that returns a pointer to a
  * 2-dimensional array of integers.
  * @width: var
  * @height: var
  * Return: NULL on failure
  */

int **alloc_grid(int width, int height)
{
	int **i, x;

	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

	i = malloc(height * sizeof(int *));

	if (i == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		i[x] = malloc(width * sizeof(int));

		if (i[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(i[x]);
			}

			free(i);

			return (NULL);
		}
	}

	return (i);
}
