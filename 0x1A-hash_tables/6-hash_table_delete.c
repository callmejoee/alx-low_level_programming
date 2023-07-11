#include "hash_tables.h"

/**
 * hash_table_delete - function to delete hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
    unsigned int i;
    hash_node_t *current, *next;

    /* free all nodes in each array element */
    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current != NULL)
        {
            next = current->next;
            free(current->key);
            free(current->value);
            free(current);
            current = next;
        }
    }

    /* free the array and hash table itself */
    free(ht->array);
    free(ht);
}
