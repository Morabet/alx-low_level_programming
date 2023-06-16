#include <stdio.h>
/**
  * main - entry point
  *
  * Return: always (success)
  */
int main(void)
{
	int i = 0, j = 1;

	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
