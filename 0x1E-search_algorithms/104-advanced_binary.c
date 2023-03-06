#include "search_algos.h"

/**
 * advanced_binary - function that searches for value in sorted array of integers.
 *
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1 if value is not in array or array is NULL, otherwise index of value
 */

int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return (bin_recursive(array, 0, size - 1, value));
}

/**
 * bin_recursive - functions that searches for value recursively
 *
 * @array: pointer to first element of array
 * @beg: index of beginning value
 * @end: index of ending value
 * @value: value to search for
 *
 * Return: index of value if present in array, or -1
 */

int bin_recursive(int *array, int beg, int end, int value)
{
    int idx, mid;

    if (end >= beg)
    {
        if (end == beg && value == array[end])
            return (end);

        mid = beg + (end - beg) / 2;

        printf("Searching in array: ");

        for (idx = beg; idx < end; idx++)
            printf("%d, ", array[idx]);

        printf("%d\n", array[idx]);

        if (value <= array[mid])
            return (bin_recursive(array, beg, mid, value));

        return (bin_recursive(array, mid + 1, end, value));
    }

    return (-1);
}
