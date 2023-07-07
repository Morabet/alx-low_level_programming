#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args.
 * @argc: number of args.
 * @argv: argument value.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
