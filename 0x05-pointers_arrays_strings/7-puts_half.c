#include "main.h"
#include "2-strlen.c"

/**
  * puts_half - function that prints half of a string, followed by a new line.
  * @str: string to be printed
  * Return: none
  */

void puts_half(char *str)
{
	int i = _strlen(str) / 2;

	int x = _strlen(str) - 1;

	while (i < x)
	{
		_putchar(str[i]);

		i++;
	}

	_putchar(10);
}
