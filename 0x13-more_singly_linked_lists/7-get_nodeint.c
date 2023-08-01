#include "lists.h"

/**
 * get_nodeint_at_index - return the n node.
 * @head: pointer to the head of list.
 * @index: index of the node.
 *
 * Return: node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
