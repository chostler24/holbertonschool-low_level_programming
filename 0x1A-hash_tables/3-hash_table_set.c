#include "hash_tables.h"
#include <string.h>

/**
  * hash_table_set - adds an element to the hash table
  * @ht: hash table to add or update
  * @key: hash key
  * @value: key value, must be duplicated
  * Return: 1 if success, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *lilnode = NULL;

	unsigned long int idx;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
	{
		return (0);
	}

	idx = key_index((unsigned char *)key, ht->size);

	node = ht->array[idx];

	if (node && strcmp(key, node->key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}

	lilnode = malloc(sizeof(hash_node_t));

	if (lilnode == NULL)
	{
		return (0);
	}

	lilnode->key = strdup(key);
	lilnode->value = strdup(value);
	lilnode->next = ht->array[idx];
	ht->array[idx] = lilnode;

	return (1);
}
