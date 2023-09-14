#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes at index of a dlistint_t linked list.
 * @head: the head of the D-linked list.
 * @index: the index of the node to delete.
 * Return: return 1 if Success, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *current;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next)
		{
			tmp = *head;
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(tmp);
		}
		else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}

	current = *head;
	while (current->next)
	{
		if (i + 1 == index)
		{
			tmp = current->next;
			current->next = tmp->next;

			if (tmp->next)
				tmp->next->prev = current;
			free(tmp);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
