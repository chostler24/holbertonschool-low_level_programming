#include "hash_tables.h"

/**
  * key_index - gives the index of a key
  * @key: hash key
  * @size: size of the array of the hash table
  * Return: index at which key/value pair is stored in hash table array
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int idx;

	unsigned long int hashy;

	hashy = hash_djb2(key);

	idx = hashy % size;

	return (idx);
}
