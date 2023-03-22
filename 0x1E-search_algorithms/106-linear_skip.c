#include "search_algos.h"

/**
 * linear_skip - searches for value in sorted skip list of ints
 * @list: pointer to head of skip list to search in
 * @value: value to search for
 *
 * Return: pointer on first node where value is, otherwise NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev, *next;
    size_t up;

    if (!list)
        return (NULL);

    prev = list;
    next = prev->express;

    while (prev->express && prev->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", next->index, next->n);

        if (next->n >= value)
            break;

        prev = next;
        next = next->express;
    }

    if (!next)
    {
        next = prev;

        while (next->next)
            next = next->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, next->index);

    up = next->index;

    while (prev->index <= up && prev->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

        if (prev->n == value)
            return (prev);

        if (prev->index == up)
            break;

        prev = prev->next;
    }

    return (NULL);
}
