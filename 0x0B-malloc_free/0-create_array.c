#include "main.h"
#include <stdlib.h>

/**
  * *create_array - function that creates an array of chars,
  * and initializes it with a specific char.
  * @size: integer
  * @c: char
  * Return: char
  */

char *create_array(unsigned int size, char c)
{
	char *x1;

	unsigned int x2;

	if (size == 0)
	{
		return (NULL);
	}

	x1 = malloc(size);

	if (x1 == NULL)
	{
		return (NULL);
	}

	for (x2 = 0; x2 < size; x2++)
	{
		x1[x2] = c;
	}

	return (x1);
}
