#include "search_algos.h"

/**
 * linear_search - searches for value in array of ints using linear search
 * @array: pointer to given array
 * @size: size of array
 * @value: resulting value
 *
 * Return: -1 if val is not present or array is NULL, otherwise first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
        int x = 0;

        if (array == NULL)
                return (-1);

        for (x = 0; x < size; x++)
        {
                printf("value checked array[%d] = [%d]\n", x, array[x]);

                if (array[x] == value)
                        return (x);
        }

        return (-1);
}
