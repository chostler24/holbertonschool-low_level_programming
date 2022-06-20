#include "main.h"
#include <stdlib.h>

/**
  * *str_concat - function that concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  * Return: NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	char *r;

	int i1, i2, i, x;

	i1 = 0;

	i2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i1])
	{
		i1++;
	}

	while (s2[i2])
	{
		i2++;
	}

	r = malloc(i1 + i2 + 1);

	if (r == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		r[i] = s1[i];
	}

	for (x = 0; s2[x] != '\0'; x++)
	{
		r[i + x] = s2[x];
	}

	r[i + x] = '\0';

	return (r);
}
