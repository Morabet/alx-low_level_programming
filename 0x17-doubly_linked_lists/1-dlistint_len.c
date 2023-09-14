#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len -  prints all the elements of a dlistint_t list.
 * @h: the header of the D-linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
