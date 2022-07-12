#include "lists.h"

/**
  * free_listint - function that frees a list.
  * @head: beginning of list
  * Return: none
  */

void free_listint(listint_t *head)
{
	listint_t *lp;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		lp = head;

		head = head->next;

		free (lp);
	}
}
