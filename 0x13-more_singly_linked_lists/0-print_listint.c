#include "lists.h"

/**
  * print_listint - function that prints all elements of a list.
  * @h: list
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *lp = h;

	unsigned int nodenum = 0;

	while (lp)
	{
		printf("%d\n", lp->n);

		lp = lp->next;

		nodenum++;
	}

	return (nodenum);
}
