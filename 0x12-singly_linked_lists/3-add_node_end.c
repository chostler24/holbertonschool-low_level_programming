#include "lists.h"

/**
  * add_node_end - function that adds a node at end of list.
  * @head: start of list
  * @str: string pointer
  * Return: address of element, NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *p;

	p = *head;

	node = malloc(sizeof(list_t));

	if (node == NULL || str == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);

	node->len = strlen(str);

	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;

		return (node);
	}

	else
	{
		p = *head;

		while (p->next != NULL)
		{
			p = p->next;
		}

		p->next = node;
	}

	return (node);
}
