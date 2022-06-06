#include "holberton.h"

/**
  * reverse_array - function that reverses the content of
  * an array of integers.
  * @a: integer
  * @n: integer
  * Return: none
  */

void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0, x = n - 1; i < x; i++, x--)
	{
		int t = a[i];

		a[i] = a[x];
		a[x] = t;

	}
}
