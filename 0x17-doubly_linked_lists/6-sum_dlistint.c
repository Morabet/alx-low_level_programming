#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data (n) of D-linked list.
 * @head: the head of the D-linked list.
 * Return: return the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
