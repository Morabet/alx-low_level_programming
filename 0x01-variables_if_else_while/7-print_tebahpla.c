#include <stdio.h>
/**
  * main - entry point
  *
  * Return: always (success)
  */
int main(void)
{
	int n = 122;

	while (n >= 0)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
