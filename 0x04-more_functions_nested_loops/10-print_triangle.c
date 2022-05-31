#include "main.h"

/**
  * print_triangle - function that prints a triangle,
  * followed by a new line.
  * @size: variable
  * Return: none
  */

void print_triangle(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = size - row; col > 0; col--)
				_putchar(32);
			for (col = 0; col < row; col++)
			{
				_putchar(35);
			}
			if (size == row)
				continue;

		_putchar(10);
		}
	}
	_putchar(10);
}
