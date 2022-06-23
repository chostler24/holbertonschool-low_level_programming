#include "main.h"

/**
  * _calloc - function that allocates memory for an array.
  * @nmemb: array
  * @size: integer
  * Return: pointer, null
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, x = 0;
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	x = nmemb * size;

	a = malloc(x);

	if (a == NULL)
	{
		return (NULL);
	}

	while (i < x)
	{
		a[i] = 0;
		i++;
	}

	return (a);
}
