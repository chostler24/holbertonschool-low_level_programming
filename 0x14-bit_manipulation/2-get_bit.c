#include "main.h"

/**
  * get_bit - function that returns the value of a bit.
  * @n: given integer
  * @index: yuh
  * Return: bit value
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int indcheck;

	int val;

	indcheck = (sizeof(unsigned long int) * 8);

	if (index > indcheck)
	{
		return (-1);
	}

	return (val = (n >> index) & 1);
}
