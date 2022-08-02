#include "lists.h"

/**
  * get_dnodeint_at_index - returns nth node of a list
  * @head: head of list
  * @index: index of node
  * Return: NULL if node does not exist
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;

		index--;
	}

	return (head);
}
