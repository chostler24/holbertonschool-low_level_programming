#include "main.h"

/**
  * more_numbers - function that prints 10 times the
  * numbers 0 - 14, followed by a new line
  * Return: none
  */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
		}
		_putchar(10);
	}
}
