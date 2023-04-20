#include "lists.h"

/**
 * add_node - function to add nodes
 *
 * @head: pointer to pointer that points to head
 *
 * @str: the string to put in the linked list
 *
 * Return: the address of the new elemnt
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
