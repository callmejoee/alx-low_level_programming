#include "hash_tables.h"

/**
 * key_index - after hashing the string it gives index
 * @key: string
 * @size: size of hash table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	while (index > size)
	{
		index = index % size;
	}

	return (index);
}
