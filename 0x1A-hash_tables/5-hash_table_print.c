#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	int size;
	int i;
	hash_node_t *current;

	if (ht == NULL)
		return;

	size = ht->size;

	printf("{");
	for (i = 0; i < size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s' : '%s'", current->key, current->value);
			if (current->next != NULL)
				printf(", ");
			current = current->next;
		}

		if (ht->array[i + 1] != NULL && i > 0 && i != size - 1)
			printf(", ");
	}
	printf("}\n");
}
