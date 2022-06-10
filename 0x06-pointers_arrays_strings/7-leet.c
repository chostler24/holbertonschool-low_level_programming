#include "holberton.h"

/**
  * *leet - function that encodes a string into 1337.
  * @s: string
  * Return: char
  */

char *leet(char *s)
{
	char *c1 = "aAeEoOtTlL";
	char *c2 = "4433007711";
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;

		while (c1[j])
		{
			if (s[i] == c1[j])
			{
				s[i] = c2[j];
			}

			j++;
		}

		i++;

	}

	return (s);
}
