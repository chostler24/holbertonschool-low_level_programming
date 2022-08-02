#include "lists.h"

/**
  * print_dlistint - function that prints all the elements of a list.
  * @h: head
  * Return: number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t elems = 0;

	const dlistint_t *node = h;

	if (node == 0)
	{
		return (0);
	}

	while (node != NULL)
	{
		printf("%d\n", node->n);

		elems++;

		node = node->next;
	}

	return (elems);
}
