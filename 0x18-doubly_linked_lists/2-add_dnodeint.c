#include "lists.h"

/**
  * add_dnodeint - adds a new node at beginning of a list.
  * @head: head node
  * @n: element
  * Return: address of new element, NULL if failed
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;

	node->prev = NULL;

	if (*head == NULL)
	{
		node->next = NULL;

		*head = node;
	}

	else
	{
		(*head)->prev = node;

		node->next = *head;

		*head = node;
	}

	return (node);
}
