#include "lists.h"

/**
* dlistint_len - return the length of a linked list
* @h: doubly linked list
* Return: number of elemnets in a linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
		h = h->next, length++;
	return (length);
}
