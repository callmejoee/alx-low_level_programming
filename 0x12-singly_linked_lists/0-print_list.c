#include "lists.h"


/**
 * print_list - function to print a linked list
 *
 * @h: first node of the list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int i = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	printf("[%d] %s\n", h->len, h->str);

	return (i);
}
