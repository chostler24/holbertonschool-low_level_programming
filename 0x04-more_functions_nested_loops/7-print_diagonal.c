#include "main.h"

/**
  * print_diagonal - function that draws a diagonal
  * line on the terminal.
  * Return: none
  * @n: variable
  */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}

	else
	{
		int i;
		int x;

		for (i = 0; i < n; i++)
		{
			for (x = 0; x < n; x++)
			{
				if (x == i)
					_putchar(92);
				else if (x < i)
					_putchar(32);
			}
			_putchar(10);
		}
	}
}
