#include "lists.h"

/**
  * sum_listint - function that returns sum of all data (n) of list.
  * @head: list
  * Return: sum of data, 0 if list empty
  */

int sum_listint(listint_t *head)
{
	int nodesum = 0;

	if (head == NULL)
	{
		return (nodesum);
	}

	while (head != NULL)
	{
		nodesum += head->n;

		head = head->next;
	}

	return (nodesum);
}
