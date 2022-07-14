#include "lists.h"

/**
  * insert_nodeint_at_index - inserts new node at given position.
  * @head: list
  * @idx: given position
  * @n: given integer
  * Return: address of new node, NULL if fail
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *iterator = *head;

	unsigned int i;

	if (!*head)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new->next = iterator;

		iterator = new;
	}

	else
	{
		for (i = 0; i < (idx - 1); i++)
		{
			iterator = iterator->next;
		}
		 new->next = iterator->next;

		 iterator->next = new;

		 new->n = n;
	}

	return (new);
}
