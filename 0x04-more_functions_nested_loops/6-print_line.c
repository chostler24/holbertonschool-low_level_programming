#include "main.h"

/**
  * print_line - function that draws a straight line
  * in the terminal.
  * Return: none
  * @n: variable
  */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}

	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}

		_putchar(10);
	}

}
