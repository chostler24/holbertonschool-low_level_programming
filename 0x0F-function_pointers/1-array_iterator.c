#include "function_pointers.h"

/**
  * array_iterator - function that executes a function given
  * as a parameter on each element of an array.
  * @array: array
  * @size: size of array
  * @action: given function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	x = 0;

	if (action != NULL && array != NULL)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
