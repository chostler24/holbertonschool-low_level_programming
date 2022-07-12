#include "lists.h"

/**
  * pop_listint - function that deletes the head node of list,
  * and returns the head node's data (n).
  * @head: beginning of list
  * Return: n or 0 if list is empty
  */

int pop_listint(listint_t **head)
{
	listint_t *lp;

	int num = 0;

	if (*head != NULL)
	{
		lp = (*head)->next;

		num = (*head)->n;

		free(*head);

		*head = lp;
	}

	return (num);
}
