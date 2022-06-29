#include "variadic_functions.h"

/**
  * print_strings - function that prints strings.
  * @separator: stuff in between strings
  * @n: number of strings
  * Return: none
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *p;

	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n - 1; i++)
	{
		p = va_arg(args, char *);

		if (p)
		{
			printf("%s", p);
		}

		else
		{
			printf("(nil)");
		}

		printf("%s", separator);
	}

	p = va_arg(args, char *);

	if (p == NULL)
		printf("(nil)\n");

	else
		printf("%s\n", p);
}
