#include "main.h"

/**
  * _strspn - function that gets the length of a prefix substring.
  * @s: string
  * @accept: string
  * Return: number of bytes in initial segment of s
  */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;
	int d;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		d = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				d = 1;
			}
		}

		if (d == 0)
		{
			return (c);
		}
	}

	return (0);
}
