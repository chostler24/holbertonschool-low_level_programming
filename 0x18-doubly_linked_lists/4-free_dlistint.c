#include "lists.h"

/**
  * free_dlistint - frees a list
  * @head: head of list
  * Return: none
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		node = head;

		head = head->next;

		free(node);
	}
}
