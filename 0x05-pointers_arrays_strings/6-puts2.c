#include "main.h"
#include "2-strlen.c"

/**
  * puts2 - function that prints every other character of a string,
  * starting with the first character, followed by a new line.
  * @str: variable
  * Return: none
  */

void puts2(char *str)
{
	int i = 0;
	int x = _strlen(str) - 1;

	for (i = 0; i <= x; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar(10);
}
