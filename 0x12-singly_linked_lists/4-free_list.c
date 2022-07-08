#include "lists.h"

/**
  * free_list - function that frees a list.
  * @head: freed list
  * Return: none
  */

void free_list(list_t *head)
{
	list_t *lp;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		lp = head;

		head = head->next;

		free(lp->str);

		free(lp);
	}
}
