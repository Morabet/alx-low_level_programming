#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the additions of positive nums.
 * @argc: number of args.
 * @argv: argument value.
 *
 * Return: if success 0, else 1.
 */
int main(int argc, char **argv)
{
	int cents, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		sum++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		if ((cents - 1) >= 0)
		{
			cents -= 1;
			continue;
		}
	}
	printf("%d\n", sum);
	return (0);
}
