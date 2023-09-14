#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the head of the D-linked list
 * @n: the element
 * Return: return the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		node->prev = NULL;
		(*head) = node;

		return (node);
	}

	current = *head;
	while (current->next)
		current = current->next;

	current->next = node;
	node->prev = current;

	return (node);
}
