#include "lists.h"

/**
  * print_dlistint_backward - prints all elements of a list backward
  * @h: head of list pointer
  * Return: nodes
  */

size_t print_dlistint_backward(const dlistint_t *h)
{
	int nodes;

	nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}

	while (h->next != NULL)
	{
		h = h->next;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->prev;

		nodes++;
	}

	return (nodes);
}
