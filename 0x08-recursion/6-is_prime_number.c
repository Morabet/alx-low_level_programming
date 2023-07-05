#include "main.h"

/**
 * is_prime - is prime number.
 * @n: number.
 * @i: param
 *
 * Return: int.
 */
int is_prime(int n, int i)
{
	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - is prime number.
 * @n: number.
 *
 * Return: int.
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);

	if (n == 0 || n == 1)
		return (0);

	if (n == 2)
		return (1);
