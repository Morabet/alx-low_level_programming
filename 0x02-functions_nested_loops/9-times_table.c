#include "main.h"
/**
  * times_table - entry point
  *
  */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int k;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = i * j;
			if (k >= 0 && k <= 9)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((i * j) <= 9)
				{
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
