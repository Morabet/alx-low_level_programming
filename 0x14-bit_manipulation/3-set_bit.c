#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number.
 * @index: index.
 *
 * Return: 1 or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > sizeof(*n) * 8)
		return (-1);

	m <<= index;
	*n = (*n | m);

	return (1);
}
