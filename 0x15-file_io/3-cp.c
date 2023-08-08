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
 * close_files - to call when closing files
 * @from: pointer to the fisrt FD
 * @to: pointer to the second FD
 * Return: void.
 */
void close_files(int *from, int *to)
{
	if (close(*from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", *from);
		exit(100);
	}
	if (close(*to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", *to);
		exit(100);
	}
}
/**
 * read_write_error - if there is an error while reading or writting.
 * @code: code to exit with
 * @from: pointer to the fisrt FD
 * @to: pointer to the second FD
 * @name: file name
 * Return: void.
 */
void read_write_error(int code, int *from, int *to, char *name)
{
	if (code == 98)
		dprintf(2, "Error: Can't read from file %s\n", name);
	if (code == 99)
		dprintf(2, "Error: Can't write to %s\n", name);

	exit(code);
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
	int to, from, r = 1024;
	char txt[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_from(&from, av[1]);

	open_to(&to, &from, av[2]);

	while (r == 1024)
	{
		r = read(from, txt, 1024);
		if (r == -1)
			read_write_error(98, &from, &to, av[1]);

		r = write(to, txt, r);
		if (r == -1)
			read_write_error(99, &from, &to, av[2]);
	}

	close_files(&from, &to);
	return (0);
}
