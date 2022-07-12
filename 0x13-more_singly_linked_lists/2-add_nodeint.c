#include "lists.h"

/**
  * add_nodeint - function that adds node at beginning of list.
  * @head: beginning of list
  * @n: integer
  * Return: address of new element, NULL if fail
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;

	node->next = *head;

	*head = node;

	return (node);
}
