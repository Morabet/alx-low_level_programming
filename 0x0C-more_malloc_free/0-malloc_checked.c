#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -  allocate memory using malloc.
 * @b: size of memory.
 *
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
