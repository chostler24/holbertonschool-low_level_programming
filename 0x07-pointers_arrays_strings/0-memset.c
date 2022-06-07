#include "main.h"

/**
  * _memset - function that fills memory with a constant byte.
  * @s: string
  * @b: string
  * @n: integer
  * Return: pointer
  */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
