#include "main.h"
#define NULL 0

/**
  * _strstr - function that locates a substring.
  * @haystack: string
  * @needle: substring
  * Return: beginning of located substring
  */

char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *x = needle;

	for (;;)
	{
		if (!*x)
		{
			return ((char *) haystack);
		}

		if (!*i)
		{
			return (NULL);
		}

		if (*i++ != *x++)
		{
			i = ++haystack;
			x = needle;
		}
	}
}
