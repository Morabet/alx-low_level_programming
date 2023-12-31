#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - entry point
  * @a: param
  * @size: param
  *
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + *(a + i * size + i);
		s2 = s2 + *(a + i * size + size - i - 1);
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
