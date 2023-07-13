#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc -  reallocates a memory block.
 * @ptr: pointer to memory block.
 * @old_size: old size of memory block.
 * @new_size: new size of memory block.
 *
 * Return: pointer to memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *np = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < new_size && i < old_size; i++)
		*(p + i) = *(np + i);

	free(ptr);
	return (p);
}
