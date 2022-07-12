#include "lists.h"

/**
  * pop_listint - function that deletes the head node of list,
  * and returns the head node's data (n).
  * @head: beginning of list
  * Return: n or 0 if list is empty
  */

int pop_listint(listint_t **head)
{
	int lp;

	lp = (*head)->n;

	*head = (*head)->next;

	if ((*head)->next == NULL)
	{
		return (0);
	}

	return (lp);
}
