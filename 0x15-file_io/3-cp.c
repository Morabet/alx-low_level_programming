#include "main.h"

/**
 * open_from - open the first file
 * @from: pointer to the FD
 * @name: file name
 * Return: void.
 */
void open_from(int *from, char *name)
{
	*from = open(name, O_RDONLY);
	if (*from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", name);
		exit(98);
	}
}
/**
 * open_to - open the second file
 * @to: pointer to the second FD
 * @from: pointer to the first FD
 * @name: file name
 * Return: void.
 */
void open_to(int *to, int *from, char *name)
{
	*to = open(name, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", name);
		close(*from);
		exit(99);
	}
}
/**
 * main - check the code for ALX School students.
 *
 * @ac: args count
 * @av: args values.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int to, from, r1 = 1024, r2 = 0;
	char txt[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_from(&from, av[1]);

	open_to(&to, &from, av[2]);

	while (r1 == 1024)
	{
		r1 = read(from, txt, 1024);
		if (r1 == -1)
			dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
		r2 = write(to, txt, r1);
		if (r2 < r1)
			dprintf(2, "Error: Can't read from file %s\n", av[2]), exit(99);
	}
	if (close(from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", from), exit(100);
	if (close(to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", to), exit(100);

	return (0);
}
