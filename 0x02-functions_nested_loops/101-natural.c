#include "main.h"
#include <stdio.h>
/**
  * main - entry point
  *
  *
  */
void main(void)
{
	int i = 1;
	int sum = 0;

	while (i <= 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
			printf("%d", sum);
		}
		i++;
	}
	printf("\n");
}
