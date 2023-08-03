#include "main.h"

/**
 *  binary_to_uint - convert binary to unsigned int.
 * @b: pointer to string of 0 and 1.
 *
 * Return: the number or 0 if failed.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, n = 1;
	int j = 0;

	if (!b)
		return (0);

	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		j++;
	}

	j--;

	while (j >= 0)
	{
		sum += ((b[j] - '0') * n);
		n *= 2;
		j--;
	}

	return (sum);
}
