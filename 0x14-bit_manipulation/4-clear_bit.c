#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the number.
 * @index: index.
 *
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > sizeof(*n) * 8)
		return (-1);

	m <<= index;
	m = ~m;

	*n = *n & m;

	return (1);
}
