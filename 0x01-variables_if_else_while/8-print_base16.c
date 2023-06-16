#include <stdio.h>
/**
  * main - entry point
  *
  * Return: always (success)
  */
int main(void)
{
	int n = 0;

	while (n < 16)
	{
		if (n < 10)
			putchar(n + '0');
		else
			putchar(n - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
