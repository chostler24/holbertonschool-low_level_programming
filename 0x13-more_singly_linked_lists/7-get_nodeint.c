#include "lists.h"

/**
  * get_nodeint_at_index - function that returns nth node of list.
  * @head: beginning of list
  * @index: index of node starting at 0
  * Return: nth node of list
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *lp = head;

	unsigned int nodenum;

	if (head == NULL)
	{
		return (NULL);
	}

	for (nodenum = 0; nodenum < index; nodenum++)
	{
		lp = lp->next;

		if (lp == NULL)
		{
			return (NULL);
		}
	}

	return (lp);
}
