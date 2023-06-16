#include <stdio.h>
/**
  * main - entry point
  *
  * Return: always (success)
  */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 113 || n == 101)
			n++;
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
