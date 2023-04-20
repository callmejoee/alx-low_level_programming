#include "lists.h"

/**
 * add_node_end - function to add a node to the end of the lniked list
 *
 * @head: head of the list
 * @str: string to put
 *
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *current;

	current = *head;
	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (node);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;

	else
	{
		while ((current)->next != NULL)
			(current) = (current)->next;

		current->next = node;
	}
	return (node);
}
