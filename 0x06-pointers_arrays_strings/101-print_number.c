#include "main.h"
#include <stdio.h>
/**
 * print_number -  a function that encode a string using rot13.
 * @n: number.
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}
	if (k / 10 != 0)
		print_number(k / 10);
	_putchar(k % 10 + '0');
}
