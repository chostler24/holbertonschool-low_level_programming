#include "main.h"

/**
  * _puts - function that prints a string, followed by a new line,
  * to stdout.
  * @str: variable
  * Return: none
  */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar(10);

}
