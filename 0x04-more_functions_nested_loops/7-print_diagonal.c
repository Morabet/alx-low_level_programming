#include "main.h"
/**
  * print_diagonal - entry point
  * @n: param
  *
  * Return: void
  */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
