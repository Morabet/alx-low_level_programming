#include "main.h"
/**
  * print_alphabet_x10 - entry point
  *
  */
void print_alphabet_x10(void)
{
	int i = 97;
	int count = 1;

	for (count = 1; count < 11; count++)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
