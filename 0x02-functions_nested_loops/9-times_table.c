#include "main.h"
/**
  * times_table - entry point
  *
  */
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j != 9)
			{
				_putchar((i * j) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
