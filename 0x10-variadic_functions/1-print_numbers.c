#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: seperator between nums
 * @n: number of args.
 *
 * Return: sum of args.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		if (separator == NULL)
			printf("%d", va_arg(int));
		else if (separator && i == 0)
			printf("%d", va_arg(int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	va_end(ap);
	printf("\n");
}
