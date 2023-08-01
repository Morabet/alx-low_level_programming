#include "lists.h"

/**
 * sum_listint - return the sum of all data in list.
 * @head: pointer to the head of list.
 *
 * Return: int sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
