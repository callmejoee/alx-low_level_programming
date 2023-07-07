#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash array
 *
 * @size: the size of the array
 *
 * Return: hash table pointer
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *new_table;

	new_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;

	new_table->array = (hash_node_t **) malloc(size * sizeof(hash_node_t *));

	if (new_table->array == NULL)
		free(new_table);

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
