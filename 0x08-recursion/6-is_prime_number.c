#include "main.h"

/**
  * is_prime_number - function that determines if input
  * integer is a prime number.
  * @n: input integer
  * Return: 1 if n is prime, otherwise 0
  */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_helper(n / 2, n));
}


/**
  * prime_helper - returns 1 if prime, o otherwise
  * @i: counter
  * @n: integer
  * Return: 1 if prime, 0 otherwise
  */

int prime_helper(int i, int n)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (prime_helper(i - 1, n));
}
