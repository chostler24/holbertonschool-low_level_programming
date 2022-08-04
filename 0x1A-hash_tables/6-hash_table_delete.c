#include "hash_tables.h"

/**
  * hash_table_delete - deletes a hash table
  * @ht: hash table
  * Return: none
  */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *hnode;

	unsigned long int itr = 0;

	if (ht == NULL)
	{
		return;
	}

	for (itr = 0; itr < ht->size; itr++)
	{
		if (ht->array[itr])
		{
			hnode = ht->array[itr];

			while (hnode)
			{
				node = hnode;

				hnode = hnode->next;

				free(node->value);

				free(node);
			}

			free(hnode);
		}
	}

	free(ht->array);

	free(ht);
}
