#include "lists.h"

/**
 * print_dlistint - prints the values in dlist
 * @h: header
 * Return: int number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes;
	const dlistint_t *current;

	current = h;
	nodes = 0;
	if (current != NULL)
		return (0);
	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}
	printf("%d\n", current->n);
	return (++nodes);
}
