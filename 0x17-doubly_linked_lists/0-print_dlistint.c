#include "lists.h"

/**
 * print_dlistint - prints all the elements of a print_dlistint
 * @h: doubly linked list
 * Return: Number of Nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
