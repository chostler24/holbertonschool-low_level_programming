#include "main.h"

/**
  * clear_bit - fucntion that sets bit value to 0.
  * @n: given integer
  * @ index: yuh
  * Return: 1 or -1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit1 = ~(1 << index);

	unsigned long int bit2 = *n & bit1;

	unsigned int indcheck;

	indecheck = (sizeof(unsigned long int) * 8);

	if (index > indcheck)
	{
		return (-1);
	}

	*n = bit2 | (0 << index);

	return (1);
}
