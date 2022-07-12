#include "lists.h"

/**
  * free_listint2 - function that frees a list.
  * @head: beginning of list
  * Return: none
  */

void free_listint2(listint_t **head)
{
	listint_t *lp;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		lp = (*head)->next;

		free(*head);

		*head = lp;
	}

	head = NULL;
}
