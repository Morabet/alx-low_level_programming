#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * is_digit - check if valid num.
 * @s: pointer to string..
 *
 * Return: if success 1, else 0.
 */

int is_digit(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}

	return (1);
}
/**
 * main - prints the additions of positive nums.
 * @argc: number of args.
 * @argv: argument value.
 *
 * Return: if success 0, else 1.
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(is_digit(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
