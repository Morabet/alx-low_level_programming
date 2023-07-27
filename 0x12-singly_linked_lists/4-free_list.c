#include "lists.h"

/**
 * free_list - free the list.
 * @head: pointer to the head of list.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp, *current;

	if (!head)
		return;

	current = head;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp->str);
		free(tmp);
	}
}

