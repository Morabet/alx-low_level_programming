#include "lists.h"

/**
 * add_nodeint_end - add new node to the end of the list.
 * @head: pointer to the head of list.
 * @n: int value of node.
 *
 * Return: the address to the new node or NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *current = *head;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head)
	{
		while (current->next)
			current = current->next;

		current->next = tmp;
	}
	else
		*head = tmp;

	return (tmp);
}
