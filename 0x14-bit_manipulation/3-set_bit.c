#include "main.h"

/**
  * set_bit - function that sets the value of a bit to 1.
  * @n: given integer
  * @index: yuh
  * Return: 1 or -1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit1 = ~(1 << index);

	unsigned long int bit2 = *n & bit1;

	unsigned int indcheck;

	indcheck = (sizeof(unsigned long int) * 8);

	if (index > indcheck)
	{
		return (-1);
	}

	*n = bit2 | (1 << index);

	return (1);
}
