#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes a node at specified point.
  * @head: list
  * @index: yuh
  * Return: 1 or -1
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *iterator = *head;

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
