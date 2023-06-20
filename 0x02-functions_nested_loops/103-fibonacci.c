#include "main.h"
#include <stdio.h>
/**
  * main - entry point
  *
  * Return: int
  */
int main(void)
{
	int n = 4000000;
	int f = 1, s = 2, next;
	unsigned long sum = 2;

	while (s <= n)
	{
		next = f + s;
		if (next % 2 == 0)
		{
			sum += next;
		}
		f = s;
		s = next;
	}
	printf("%lu\n", sum);
	return (0);
}
