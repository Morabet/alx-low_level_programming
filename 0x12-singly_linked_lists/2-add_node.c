#include "lists.h"

/**
 * add_node - add a node at the beginning of the list.
 * @head: pointer to the head of list.
 * @str: string.
 *
 * Return: head to list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	size_t len = strlen(str);

	tmp = malloc(sizeof(list_t));
	if (!head || !tmp)
		return (NULL);

	if (str)
	{
		tmp->str = strdup(str);
		if (tmp->str == NULL)
		{
			free(tmp);
			return (NULL);
		}
		tmp->len = len;
	}

	tmp->next = *head;
	*head = tmp;

	return (*head);
}
