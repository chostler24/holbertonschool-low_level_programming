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
    skiplist_t *node = list, *prev = list;

    if (!list)
        return (NULL);

    node = list->express;

    for (; node != NULL; prev = node, node = node->express)
    {
        printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

        if (node->n >= value)
            break;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", prev->index, node->index);

    for (; prev != NULL; prev = prev->next)
    {
        printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

        if (prev->n == value)
            return (prev);
    }

    return (NULL);
}
