#include "lists.h"

/**
 * listint_len - count the elements of the list.
 * @h: pointer to the head of list.
 *
 * Return: number of elements of list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
