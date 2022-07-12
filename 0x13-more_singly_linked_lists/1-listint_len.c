#include "lists.h"

/**
  * listint_len - function that returns the number of
  * elements in a list.
  * @h: list
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)
{
	const listint_t *lp = h;

	unsigned int elem = 0;

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
