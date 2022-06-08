#include "main.h"

/**
  * realsqrt - heavy lifting for _sqrt_recursion
  * @n: integer
  * @x: variable
  * Return: natural sqrt of n, or -1 if no sqrt exists
  */

int realsqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}

	if (x * x > n)
	{
		return (-1);
	}

	return (realsqrt(n, x + 1));
}


/**
  * _sqrt_recursion - function tht returns the natural square root of n.
  * @n: integer
  * Return: natural sqrt of n, or -1 if no sqrt exists
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (realsqrt(n, 1));
}
