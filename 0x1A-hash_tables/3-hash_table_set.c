#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	index = key_index(key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = value;
		return (1);
	}
	else
	{
		ht->array[0] = value;
		return(0);
	}
}
