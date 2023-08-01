#include "lists.h"

/**
 * pop_listint - delete the heade and return the data.
 * @head: pointer to the head of list.
 *
 * Return: the deleted head data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	if (*head)
	{
		tmp = *head;
		n = (*head)->n;
		*head = (*head)->next;

		free(tmp);
	}
	return (n);
}
