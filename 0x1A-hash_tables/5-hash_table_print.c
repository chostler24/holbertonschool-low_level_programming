#include "hash_tables.h"
#include <stdio.h>

/**
  * hash_table_print - prints a hash table
  * @ht: hash table
  * Return: none
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int itr, i = 0;

	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		if (ht->array[i] != NULL)
		{
			while (node)
			{
				if (itr == 1)
				{
					printf(", ");
				}

				printf("'%s': '%s'", node->key, node->value);

				itr = 1;

				node = node->next;
			}
		}
	}

	printf("}\n");
}
