#include "main.h"

/**
 * _sqrt - cal sqrt of n.
 * @n: number.
 * @i: itirator
 *
 * Return: int.
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - cal sqrt of n.
 * @n: number.
 *
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}

