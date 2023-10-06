#include "hash_tables.h"

/**
 * free_node - free a node of table
 * @node: the pointer to the node
 * Return: void
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the pointer to the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *current;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp && tmp->next)
		{
			current = tmp;
			tmp = tmp->next;
			free_node(current);
		}

		if (tmp)
			free_node(tmp);
	}

	free(ht->array);
	free(ht);
}
