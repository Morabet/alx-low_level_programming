#include "main.h"
#include <stdio.h>
/**
  * main - entry point
  *
  * Return: int
  */
int main(void)
{
	int counter;
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long sum = 0;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

	printf("1");
	for (counter = 2; counter <= 98; counter++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum > 9999999999)
		{
			sum_head = sum / 10000000000;
			sum_tail = sum % 10000000000;
			b_head = b / 10000000000;
			b_tail = b % 10000000000;
			b_head += sum_head;
			a_head = b_head + (b_tail + sum_tail) / 10000000000;
			a_tail = (b_tail + sum_tail) % 10000000000;
			printf(", %ld%09ld", a_head, a_tail);
		}
		else
		{
			printf(", %lu", sum);
		}
	}
	printf("\n");
	return (0);
}
