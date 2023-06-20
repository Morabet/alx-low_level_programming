#include "main.h"
/**
  * times_table - entry point
  *
  */
void times_table(void)
{
	int i = 0;
	int j;
	int k;

	if (n >= 0 && n <= 15)
	{
		while (i < 10)
		{
			_putchar('0');
			j = 1;
			while (j < 10)
			{
				k = i * j;
				if (k >= 0 && k <= 9)
				{
					printf(",   ");
				}
				else if (k <= 99)
				{
					printf(",  ");
				}
				else
				{
					printf(", ");
				}
				printf("%d", k);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
