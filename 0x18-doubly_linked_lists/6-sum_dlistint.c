#include "lists.h"

/**
  * sum_dlistint - returns the sum of all data of a list
  * @head: head node
  * Return: sum of data, 0 if list is empty
  */

int sum_dlistint(dlistint_t *head)
{
	int data;

	data = 0;

	while (head)
	{
		data += head->n;

		head = head->next;
	}

	return (data);
}
