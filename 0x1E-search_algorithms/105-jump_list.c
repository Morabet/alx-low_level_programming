#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 * Return: node or null
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t  *prev = list, *n = list;
	size_t step, i = 0;

	if (!list || size == 0)
		return (NULL);
	step = sqrt(size);
	while (n->next && (n->n < value))
	{
		prev = n;
		i = 0;
		while (n->next && i < step)
		{
			n = n->next;
			i++;
		}

		printf("Value checked at index [%ld] = [%d]\n", n->index, n->n);
		if (prev->index >= size)
			return (NULL);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, n->index);
	n->index = n->index >= size ? size - 1 : n->index;

	while (prev && (prev->n <= value))
	{
		printf("Value checked at index array[%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
