#include "main.h"

/**
  * bitcount - count bits
  * @n: integer
  * Return: 1 0r -1
  */

unsigned int bitcount(unsigned long int n)
{
	unsigned int x = 0;

	while (n > 0)
	{
		x++;

		n &= (n - 1);
	}

	return (x);
}

/**
  * flip_bits - function that flips bits.
  * @n: integer
  * @m: index
  * Return: 1 or -1
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (bitcount(n ^ m));
}
