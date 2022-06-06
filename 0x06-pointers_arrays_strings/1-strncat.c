#include "holberton.h"

/**
  * _strncat - function that concatenates two strings.
  * @dest: string
  * @src: string
  * @n: integer
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[x] != '\0' && n--)
	{
		dest[i] = src[x];
		x++;
		i++;
	}

	dest[i] = '\0';

	return (dest);

}
