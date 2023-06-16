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
		putchar("%c", n);
		n++;
	}
	putchar("\n");
}
