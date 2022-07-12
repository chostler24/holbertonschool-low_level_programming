#include "lists.h"

/**
  * add_nodeint_end - function that adds a node at end of list.
  * @head: beginning of list
  * @n: integer
  * Return: address of new element, NULL if fail
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *lp;

	lp = *head;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;

	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;

		return (node);
	}

	while (lp->next != NULL)
	{
		lp = lp->next;
	}

	lp->next = node;

	return (node);
}
