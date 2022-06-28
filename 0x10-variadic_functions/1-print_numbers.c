#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers.
  * @separator: char
  * @n: integer
  * Return: none
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%i\n", va_arg(args, int));
		}

		printf("\n");
		va_end(args);
		return;
	}

	i = 1;

	while (i < n)
	{
		printf("%i%s", va_arg(args, int), separator);
		i++;
	}

	printf("%i\n", va_arg(args, int));

	va_end(args);
}
