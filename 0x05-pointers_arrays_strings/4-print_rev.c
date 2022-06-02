#include "main.h"
#include "2-strlen.c"

/**
  * print_rev - function that prints a string, in reverse,
  * followed by a new line.
  * @s: variable
  * Return: none
  */

void print_rev(char *s)
{
	int i, n = 0;

	n = _strlen(s);

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar(10);
}
