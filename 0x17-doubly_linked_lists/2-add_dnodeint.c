#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list.
 * @head: the heade of D-linked lists
 * @n: the element
 * Return: return the address of the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;

	node->prev = NULL;
	node->next = (*head);

	if ((*head))
		(*head)->prev = node;

	(*head) = node;

	return (node);
}
