#include "lists.h"

/**
 * reverse_listint - reverse the list.
 * @head: pointer to the head of list.
 *
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *current;

	if (*head)
	{
		current = *head;

		while (current->next)
		{
			tmp = *head;
			tmp = current->next;
			current->next = current->next->next;

			tmp->next = *head;
			*head = tmp;
		}
	}

	return (*head);
}
