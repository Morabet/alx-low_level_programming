#include "main.h"

/**
 * get_bit - return the value of bit at given index.
 * @n: the number.
 * @index: index.
 *
 * Return: the value at index or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
