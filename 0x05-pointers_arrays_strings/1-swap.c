#include "main.h"

/**
  * swap_int - function that swaps the values of two integers.
  * @a: variable
  * @b: variable
  * Return: none
  */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
