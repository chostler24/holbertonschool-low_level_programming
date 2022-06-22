#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - function that allocates memory.
  * @b: integer
  * Return: none
  */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
