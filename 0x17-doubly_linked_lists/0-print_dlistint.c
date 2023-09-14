#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: the header of the D-linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		n++;
	}

	return (n);
}
