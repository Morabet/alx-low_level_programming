#include "main.h"
/**
  * times_table - entry point
  *
  */
void times_table(void)
{
	int i = 1;
	int j;
	int k;

	while (i < 10)
	{
		_putchar('0');
		j = 1;
		while (j < 10)
		{
			k = i * j;
			if (k >= 0 && k <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
