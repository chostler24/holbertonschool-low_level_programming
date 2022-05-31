#include "main.h"

/**
  * print_square - function that prints a square,
  * followed by a new line.
  * Return: none
  */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar(10);
	}

	else
	{
		int i;
		int n;

		for (i = 1; i < size; i++)
		{
			for (n = 1; n < size; n++)
			{
				if (n == i)
					_putchar(35);
				else if (n < i)
					_putchar(10);
			}
			_putchar(10);
		}
	}
}

