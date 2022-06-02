#include "main.h"

/**
  * rev_string - function that reverses a string.
  * @s: variable
  * Return: none
  */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char a[500];

	while (s[i])
	{
		a[i] = s[i];
		i++;
	}

	i = i - 1;

	while (i >= 0)
	{
		s[i] = a[j];
		j++;
		i--;
	}
}
