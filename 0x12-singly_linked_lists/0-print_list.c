#include "lists.h"

/**
  * print_list - function that prints all the elements of a list.
  * @h: list
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	list_t *lp = (list_t *)h;

	int nodenum = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (lp != NULL)
	{
		if (lp->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%u] %s\n", lp->len, lp->str);
		}

		lp = lp->next;

		nodenum++;
	}

	return (nodenum);
}
