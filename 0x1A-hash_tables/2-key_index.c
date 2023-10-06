#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key to get the index of
 * @size: the size of the array
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
