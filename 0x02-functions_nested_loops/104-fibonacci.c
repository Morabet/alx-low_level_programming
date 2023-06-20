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
	unsigned long doulbe f = 1, s = 2, next;

	printf("%Lf", f);
	printf(", %Lf", s);
	while (i <= 98)
	{
		next = f + s;
		 printf(", %Lf", next);
		f = s;
		s = next;
		i++;
	}
	printf("\n");
	return (0);
}
