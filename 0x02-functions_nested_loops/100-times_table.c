#include "main.h"
/**
  * print_times_table - entry point
  * @n: param
  *
  */
void print_times_table(int n)
{
	int i = 0, j ,k;

	if (n >= 0 && n <= 15)
	{
		while (i <= n )
		{
			_putchar('0');
			j = 1;
			while (j <= n)
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
