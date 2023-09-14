#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: the head of the D-linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
