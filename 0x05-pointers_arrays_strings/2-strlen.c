#include "main.h"

/**
  * _strlen - function that returns the length of a string.
  * @s: variable
  * Return: string length
  */

int _strlen(char *s)
{
	int x = 0;

	while (*s++)

		x++;

	return (x);
}
