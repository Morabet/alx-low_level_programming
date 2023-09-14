#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: the head of D-linked list.
 * @idx: the index of the position of insertion.
 * @n: the element of the new node
 * Return: the address of the new node or null.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *node;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current)
	{
		current = current->next;
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	current = *h;

	while (current->next->next)
	{
		if (i + 1 == idx)
		{
			node->prev = current;
			node->next = current->next;

			current->next->prev = node;
			current->next = node;

			return (node);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}