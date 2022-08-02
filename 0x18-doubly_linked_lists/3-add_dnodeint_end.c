#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at end of list.
  * @head: head node
  * @n: elements
  * Return: address of new element, NULL if fail
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p = NULL;

	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;

	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;

		*head = node;
	}

	else
	{
		p = *head;

		while (p->next != NULL)
		{
			p = p->next;
		}

		p->next = node;

		node->prev = p;
	}

	return (node);
}
