#include "main.h"
#define NULL 0

/**
  * _strpbrk - function that searches a string for any
  * of a set of bytes.
  * @s: string
  * @accept: string
  * Return: pointer to the byte s
  */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int x;

	for (i = 0; *s != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}

		s++;
	}

	return (NULL);
}
