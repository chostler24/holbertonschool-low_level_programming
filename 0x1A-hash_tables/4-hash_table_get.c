#include "hash_tables.h"
#include <string.h>

/**
  * hash_table_get - retrieves a value associated with a hash key
  * @ht: hash table
  * @key: key to be found
  * Return: value associated with element, NULL if key not found
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;

	unsigned long int i;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}

	i = key_index((unsigned char *)key, ht->size);

	node = ht->array[i];

	if (node == NULL)
	{
		return (NULL);
	}

	while (strcmp(key, node->key) != 0)
	{
		node = node->next;
	}

	return (node->value);
}
