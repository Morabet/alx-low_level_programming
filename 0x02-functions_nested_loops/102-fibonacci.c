#include "main.h"
#include <stdio.h>
/**
  * main - entry point
  *
  * Return: int
  */
int main(void)
{
	int i = 3;
	unsigned long f = 1, s = 2, next;

	printf("%lu", f);
	printf(", %lu", s);
	while (i <= 50)
	{
		next = f + s;
		 printf(", %lu", next);
		f = s;
		s = next;
		i++;
	}
	printf("\n");
	return (0);
}
