#include "function_pointers.h"

/**
  * int_index - function that searches for an integer.
  * @array: array
  * @size: of integer
  * @cmp: function pointer
  * Return: index, -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	x = 0;

	if (cmp != NULL && array != NULL)
	{
		while (x < size)
		{
			if (cmp(array[x]))
			{
				return (x);
			}

			x++;
		}
	}

	return (-1);
}
