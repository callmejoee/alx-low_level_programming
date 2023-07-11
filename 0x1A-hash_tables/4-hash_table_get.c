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

	index = hash_djb2(key);

	hash_node_t *element = ht->array[index];

	if (element != NULL)
	{
		if (strcmp(element->key, key)
				return (element->value);
	}

	return (NULL);
}
