#include "main.h"
/**
  * print_line - entry point
  * @n: param
  *
  */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
