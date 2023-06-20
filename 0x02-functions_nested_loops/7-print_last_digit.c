#include "main.h"
/**
  * print_last_digit - entry point
  * @x: param
  *
  * Return: value of the last digits
  */
int print_last_digit(int n)
{
	int x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');

	return (x);
}
