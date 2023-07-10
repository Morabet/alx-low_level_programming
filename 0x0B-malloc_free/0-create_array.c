#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  array of chars and initializes it whith a specific char.
 * @size: size of array.
 * @c: char.
 *
 * Return: pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	return (p);
}
