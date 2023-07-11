#include "hash_tables.h"

/**
 * hash_table_get - gets the value for the hash table
 *
 * @ht: hash table
 * @key: key to search
 *
 * Return: value
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *element;

	index = hash_djb2((const unsigned char *) key) % ht->size;


       	element = ht->array[index];

	if (element != NULL)
	{
		if (strcmp(element->key, key) == 0)
				return (element->value);
	}

	return (NULL);
}
