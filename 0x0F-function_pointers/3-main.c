#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code for ALX School students.
 * @argc: num of args.
 * @argv: pointer to args
 *
 * Return: Success 0.
 */

int main(int argc, char **argv)
{
	int (*op_function)(int, int);
	int n1, n2, r;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2];

	op_function = get_op_func(op);
	if (op_function == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	r = op_function(n1, n2);
	printf("%d\n", r);

	return (0);
}
