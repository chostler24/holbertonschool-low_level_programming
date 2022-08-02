#include "lists.h"

/**
  * dlistint_len - returns number of elements in list.
  * @h: head
  * Return: number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elems = 0;

	const dlistint_t *node = h;

	if (node == 0)
	{
		return (0);
	}

	while (node != NULL)
	{
		elems++;

		node = node->next;
	}

	return (elems);
}
