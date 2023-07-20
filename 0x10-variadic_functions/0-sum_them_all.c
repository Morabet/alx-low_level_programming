#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: num of args
 *
 * Return: sum of args.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
