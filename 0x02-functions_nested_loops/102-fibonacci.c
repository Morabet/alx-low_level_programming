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
	int f = 1, s = 2, next;

	printf("%d\n", f);
	printf("%d\n", s);
	while (i <= 50)
	{
		next = f + s;
		printf("%d\n", next);
		f = s;
		s = next;
		i++;
	}
	return (0);
}
