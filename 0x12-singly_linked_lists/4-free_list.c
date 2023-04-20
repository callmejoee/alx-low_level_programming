#include "lists.h"

/**
 * free_list - function to frees the linked list
 *
 * @head: head of the list
 *
 * Return: void
 *
 */

void free_list(list_t *head)
{
	list_t *next_node, *current_node;

	if (head == NULL)
		return;
	current_node = head;
	next_node = NULL;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}

	head = NULL;

}

