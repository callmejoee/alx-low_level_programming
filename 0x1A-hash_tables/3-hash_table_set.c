#include "hash_tables.h"

/**
 * hash_table_set - function to take hash table and key/value pairs to set them
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 0 on failure, 1 on success.
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
	{
		return (0);
	}

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

	else if (strcmp(key, ht->array[index]->key) == 0)
	{
		strcpy(ht->array[index]->value, value);
		return (1);
	}
	else
   	{
	        unsigned long int i;
	        for (i = index + 1; i != index; i = (i + 1) % ht->size)
	        {
	            if (ht->array[i] == NULL)
	            {
	                ht->array[i] = new_node;
	                return (1);
	            }
	            else if (strcmp(key, ht->array[i]->key) == 0)
        	    {
        	        strcpy(ht->array[i]->value, value);
        	        return (1);
        	    }
       		}
       		return (0);
    	}
}
