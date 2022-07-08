#include "lists.h"

/**
  * add_node - function that adds a node at the start of list
  * @head: start of list
  * @str: string
  * Return: address of element, NULL
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL || str == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);

	node->len = strlen(str);

	node->next = *head;

	*head = node;

	return (node);
}
