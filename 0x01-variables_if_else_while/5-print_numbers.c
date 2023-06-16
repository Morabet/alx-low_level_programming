#include <stdio.h>
/**
  * main - entry point
  *
  * Return: always (success)
  */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
