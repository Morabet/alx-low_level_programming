#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to the head pf the table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int printed = 0;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp)
		{
			if (printed == 1)
				printf(", ");

			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;

			printed = 1;
		}
	}
	printf("}\n");
}
