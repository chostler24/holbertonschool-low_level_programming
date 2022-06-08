#include "main.h"

/**
  * _realsqrt - actually calculates sqrt
  * @a: variable
  * @b: variable
  * Return: same as above function
  */

int _realsqrt(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}

	if (a * a > b)
	{
		return (-1);
	}

	return (_realsqrt(a + 1, b));
}

/**
  * _sqrt_recursion - returns sqrt of n
  * @n: integer
  * Return: sqrt, or -1 if none exists
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_realsqrt(0, n));
}
