#include "main.h"

/**
  * binary_to_uint - function that converts a binary number to an unsigned int.
  * @b: pointer to string
  * Return: converted number, or 0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	int x = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[x] == 48 || b[x] == 49)
	{
		num <<= 1;

		num += b[x] - '0';

		x++;

		if (b[x] >= '2')
		{
			return (0);
		}
	}

	return (num);
}
