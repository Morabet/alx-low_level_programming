#include "main.h"

/**
 * flip_bits -   number of bits flip to get from one number to another.
 * @n: pointer to the number.
 * @m: pointer to the number
 *
 * Return: 1 or -1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			i++;

		n >>= 1;
		m >>= 1;
	}

	return (i);
}
