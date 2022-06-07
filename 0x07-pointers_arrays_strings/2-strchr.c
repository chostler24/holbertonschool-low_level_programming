#include "main.h"
#define NULL 0

/**
  * _strchr - function that locates a character in a string.
  * @s: string
  * @c: character
  * Return: pointer to first occurence of character c
  */

char *_strchr(char *s, char c)
{
	char *i = NULL;

	if (s != NULL)
	{
		do {
			if (*s == c)
			{
				i = s;
				break;
			}
		}

	while (*s++);

	}

	return (i);
}
