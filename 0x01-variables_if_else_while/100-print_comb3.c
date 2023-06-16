#include <stdio.h>
/**
  * main - entry point
  *
  * Return: always (success)
  */
int main(void)
{
	int n = 0, k = 0;

	while (n <= 8)
	{
		k = n + 1;
		while (k <= 9)
		{
			putchar(n + '0');
			putchar(k + '0');
			if (n != 8 || k != 9)
			{
				putchar(',');
				putchar(' ');
			}
			k++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
