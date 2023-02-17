#include "search_algos.h"

/**
 * binary_search - searches for val in array of ints using binary search
 * @array: pointer to array
 * @size: size of array
 * @value: resulting value
 *
 * Return: -1 if val is not present or array is NULL, otherwise first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
        int x = 0;
        int y;
        int z = (int) size - 1;
        int idx;

        while (x <= z)
        {
                printf("Searching in array: ");

                for (idx = x; idx < z; idx++)
                        printf("%d, ", array[idx]);

                printf("%d\n", array[idx]);

                y = (x + z) / 2;

                if (array[y] < value)
                        x = y + 1;
                else if (array[y] > value)
                        z = y - 1;
                else
                        return (y);
        }

        return (-1);
}
