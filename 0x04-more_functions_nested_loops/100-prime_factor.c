#include <stdio.h>
#include <math.h>
/**
  * main - entry point
  *
  * Return: int
  */
int main(void)
{
	int x, factor;
	long n = 612852475143;
	double square = sqrt(n);

	for (x = 1; x <= square; x++)
	{
		if (n % x == 0)
			factor = n / x;
	}
	printf("%d\n", factor);
	return (0);
}
