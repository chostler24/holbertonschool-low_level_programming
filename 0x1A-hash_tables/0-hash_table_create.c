#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table
  * @size: size of the array
  * Return: pointer to created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int itr;

	hash_table_t *tbl;

	tbl = malloc(sizeof(hash_table_t));

	if (tbl == NULL)
	{
		return (NULL);
	}

	tbl->size = size;

	tbl->array = malloc(size * sizeof(hash_node_t *));

	if (tbl->array == NULL)
	{
		free(tbl);

		return (NULL);
	}

	for (itr = 0; itr < size; itr++)
	{
		tbl->array[itr] = NULL;
	}

	return (tbl);
}
