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
		putchar(n);
		n++;
	}
	n = 65;
	while (n < 91)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
