#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);	
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		ht->array[0] = new_node;
		return(0);
	}
}
