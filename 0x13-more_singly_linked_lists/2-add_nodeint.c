#include "lists.h"

/**
 * add_nodeint - add new node to the beginning of the list.
 * @head: pointer to the head of list.
 * @n: int value of node.
 *
 * Return: the address to the new node or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;

	if (*head)
		tmp->next = *head;
	else
		tmp->next = NULL;

	*head = tmp;
	return (tmp);
}
