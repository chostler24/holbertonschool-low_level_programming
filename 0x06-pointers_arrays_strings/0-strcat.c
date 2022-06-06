#include "holberton.h"

/**
  * _strcat - function that concatenates two strings
  * @src: string
  * @dest: string
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}

	dest[i] = '\0';

	return (dest);

}
