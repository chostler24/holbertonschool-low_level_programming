#include "main.h"

/**
  * print_most_numbers - function that prints the numbers
  * 0 - 9, except for 2 and 4, followed by a new line
  * Return: none
  */

void print_most_numbers(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		if (i == 50)
		{
		}

		else if (i == 52)
		{
		}

		else
		{
			_putchar(i);
		}

		i++;
	}

	_putchar(10);
}
