#include "lists.h"

/**
 * add_node_end - add a node at the end of the list.
 * @head: pointer to the head of list.
 * @str: string.
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *current = *head;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);

	if (str)
	{
		tmp->str = strdup(str);
		if (!tmp->str)
		{
			free(tmp);
			return (NULL);
		}
		tmp->len = strlen(str);
	}
	if (current)
	{
		while (current->next)
			current = current->next;

		tmp->next = NULL;
		current->next = tmp;
	}
	else
	{
		tmp->next = NULL;
		*head = tmp;
	}

	return (tmp);
}
