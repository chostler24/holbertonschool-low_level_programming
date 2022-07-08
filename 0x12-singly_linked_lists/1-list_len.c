#include "lists.h"

/**
  * list_len - function that returns number of elements in linked list.
  * @h: list
  * Return: number of elements
  */

size_t list_len(const list_t *h)
{
	list_t *lp = (list_t *)h;

	int elem = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (lp != NULL)
	{
		elem++;

		lp = lp->next;
	}

	return (elem);
}
