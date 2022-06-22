#include "main.h"

/**
  * string_nconcat - function that concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  * @n: integer
  * Return: NULL if fail
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, x1 = 0, x2 = 0, x3 = 0;
	char *s;
	char *junk;

	junk = malloc(5);
	free(junk);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x1 = strlen(s1);
	x2 = strlen(s2);
	if (n >= 12)
		x3 = x1 + x2;
	else
		x3 = x1 + n;
	s = malloc(sizeof(char) * x3 + 1);
	if (s == NULL)
		return (NULL);
	x2 = 0;
	while (i < x3)
	{
		if (i <= x1)
			s[i] = s1[i];
		if (i >= x1)
		{
			s[i] = s2[x2];
			x2++;
		}
		i++;
	}
	s[i] = '\0';
	return (s);
}
