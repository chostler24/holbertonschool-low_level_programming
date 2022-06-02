#include "main.h"

/**
  * puts2 - function that prints every other character of a string,
  * starting with the first character, followed by a new line.
  * @str: variable
  * Return: none
  */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		str++;
	}

	_putchar(10);
}
