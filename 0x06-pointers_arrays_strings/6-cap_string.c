#include "holberton.h"

/**
  * *cap_string - function that capitalizes all words of a string.
  * @s: string
  * Return: char
  */

char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}

	while (s[i])
	{
		switch (s[i - 1])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':

				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
				}

				break;
		}

		i++;
	}

	return (s);
}
