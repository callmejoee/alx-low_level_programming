#include "lists.h"

/**
 * list_len - function to print the number of the linked list
 *
 * @h: the head node of the linked list
 *
 * Return: number of nodes
 *
 */



size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}

	return (++count);
}
