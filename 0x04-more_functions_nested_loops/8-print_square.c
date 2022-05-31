#include "main.h"

/**
  * print_square - function that prints a square,
  * followed by a new line.
  * @size: variable
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

		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}

