#include "hash_tables.h"

/**
 * shash_table_create - create the sorted hash table
 * @size: the size of the hash table
 * Return: the pointer to the table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(shash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}
/**
 * make_shash_node - create a new node.
 * @key: the key of the node.
 * @value: the value of the node.
 * Return: a new node.
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *node;

	if (!key || *key == '\0' || !value)
		return (NULL);

	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	node->snext = NULL;
	node->sprev = NULL;

	return (node);
}

/**
 * shash_table_set - add element to the sorted hash table
 * @ht: pointer to the head table
 * @key: key string
 * @value: value string
 * Return: 1 if Success else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *current, *node;
	unsigned long int index;
	char *tmp_value;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			tmp_value = strdup(value);
			if (!tmp_value)
				return (0);

			free(current->value);
			current->value = tmp_value;

			return (1);
		}
		current = current->next;
	}

	node = make_shash_node(key, value);
	if (!node)
		return (0);

	node->next = ht->array[index];
	ht->array[index] = node;

	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		current = ht->shead;
		while (current->snext && strcmp(current->snext->key, key) < 0)
			current = current->snext;

		node->sprev = current;
		node->snext = current->snext;

		if (!current->snext)
			ht->stail = node;
		else
			current->snext->sprev = node;

		current->snext = node;
	}

	return (1);
}

/**
 * shash_table_get - get the value of the key
 * @ht: pointer to hash table
 * @key: key string
 * Return: the value associated with key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - print the hash table
 * @ht: pointer to the head
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int printed = 0;

	if (!ht)
		return;

	current = ht->shead;

	printf("{");
	while (current)
	{
		if (printed == 1)
			printf(", ");

		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;

		printed = 1;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print the hash table in reverse
 * @ht: pointer to the head
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int printed = 0;

	if (!ht)
		return;

	current = ht->stail;

	printf("{");
	while (current)
	{
		if (printed == 1)
			printf(", ");

		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;

		printed = 1;
	}
	printf("}\n");
}

/**
 * free_snode - free a node of sorted table
 * @node: the pointer to the node
 * Return: void
 */
void free_snode(shash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * shash_table_delete - delete the hash table
 * @ht: pointer to the head
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *current;

	if (!ht)
		return;

	current = ht->shead;
	while (current)
	{
		tmp = current;
		current = current->snext;

		free_snode(tmp);
	}

	free(ht->array);
	free(ht);
}
