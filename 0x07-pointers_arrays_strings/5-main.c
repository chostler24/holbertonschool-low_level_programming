#include "main.h"
#define NULL 0

/**
  * _strstr - function that locates a substring.
  * @haystack: string
  * @needle: substring
  * Return: pointer to the beginning of located substring
  */

char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *x = needle;

	for (;;)
	{
		if (!*x)
		{
			return ((char *) haystack);
		}

		if (!*a)
		{
			return (NULL);
		}

		if (*a++ != *x++)
		{
			a = ++haystack;
			x = ++needle;
		}
	}
}
