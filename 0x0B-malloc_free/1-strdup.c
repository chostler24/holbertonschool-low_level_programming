#include "main.h"
#include <stdlib.h>

/**
  * *_strdup - function that returns a pointer to a newly allocated space
  * in memory, which contains a copy of the string given as a parameter.
  * @str: string
  * Return: NULL if str is NULL or if not enough memory available
  */

char *_strdup(char *str)
{
	char *s, *t;

	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	s = malloc(i + 1);

	t = s;

	if (t == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		*t++ = *str++;
	}

	*t = '\0';

	return (s);
}
