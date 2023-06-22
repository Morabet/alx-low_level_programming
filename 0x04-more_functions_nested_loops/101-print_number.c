#include "main"
/**
  * print_number - entry point
  * @n: param
  *
  * Return: void
  */
void print_number(int n)
{
	int divisor = 1;

	if (n == 0)
	{
	_putchar('0');
	return ;
	}
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	while (n / divisor >= 10)
	{
	divisor *= 10;
	}
	while (divisor > 0)
	{
	_putchar('0' + (n / divisor));
	n %= divisor;
	divisor /= 10;
	}
}
