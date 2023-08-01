#include "lists.h"

/**
 * insert_nodeint_at_index -insert a node in list.
 * @head: pointer to the head of list.
 * @idx: index to insert node in.
 * @n: data for the node
 *
 * Return: address of the new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *current = *head;
	unsigned int i = 0;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;


	if (idx == 0 && head)
	{
		tmp->next = *head;
		*head = tmp;
	}
	if (!head && idx == 0)
	{
		tmp->next = NULL;
		*head = tmp;
	}

	if (head && idx > 0)
	{
		while (current && i  < idx - 1)
		{
			current = current->next;
			i++;
		}

		tmp->next = current->next;
		current->next = tmp;
	}

	return (tmp);
}
