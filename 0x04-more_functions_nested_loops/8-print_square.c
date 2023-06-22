#include "main.h"
/**
  * print_square - entry point
  * @size: param
  *
  * Return: void
  */
void print_square(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
