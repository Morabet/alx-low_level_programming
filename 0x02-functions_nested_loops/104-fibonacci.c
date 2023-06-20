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
	unsigned int f = 1, s = 2, next;

	printf("%d", f);
	printf(", %d", s);
	while (i <= 98)
	{
		next = f + s;
		 printf(", %d", next);
		f = s;
		s = next;
		i++;
	}
	printf("\n");
	return (0);
}
