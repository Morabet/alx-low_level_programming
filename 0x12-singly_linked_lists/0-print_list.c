#include "lists.h"

/**
 * print_list - a function that prints a linked list.
 * @h: pointer to list.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%u] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		n++;
		h = h->next;
	}

	return (n);
}
