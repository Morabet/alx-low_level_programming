#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program.
 * @argc: number of args.
 * @argv: argument value.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
