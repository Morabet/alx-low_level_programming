#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at the index.
 * @head: pointer to the head of list.
 * @index: index to the node to delete.
 *
 * Return: 1 if success -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current;
	unsigned int i = 0;

	if (*head)
	{

		if (index == 0 && (*head)->next)
		{
			tmp = (*head);
			(*head) = (*head)->next;

			free(tmp);
			return (1);
		}
		if (index == 0 && !(*head)->next)
		{
			free(*head);
			*head = NULL;
			return (1);
		}

		current = *head;
		while (current && i + 1 < index)
		{
			i++;
			current = current->next;
		}
		/** in case the index is larger than the length of the list **/
		if (current)
		{
			tmp = current->next;
			current->next = current->next->next;
			free(tmp);
			return (1);
		}
	}

	return (-1);
}
