#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes node at index of list
  * @head: head node
  * @index: index
  * Return: 1 if success, -1 if fail
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *iterator = *head;

	int counter = (index - 1), i;

	if (index == 0)
	{
		temp = (*head)->next;
		(*head)->next = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < counter; i++, iterator = iterator->next)
	{
		if (!iterator->next)
		{
			return (-1);
		}
	}

	temp = iterator->next;

	iterator->next = temp->next;

	free(temp);

	return (1);
}
