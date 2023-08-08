#include "main.h"
/**
 * main - check the code for ALX School students.
 *
 * @ac: args count
 * @av: args values.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int to, from;
	ssize_t r;
	char txt[1024];

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((r = read(from, txt, 1024)) > 0)
		if (write(to, txt, r) != r)
			dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	if (r == -1)
		dprintf(2, "Error: Can't write to %s\n", av[1]), exit(98);

	if (close(from))
		dprintf(2, "Error: Can't close fd %d\n", from), exit(100);
	if (close(to))
		dprintf(2, "Error: Can't close fd %d\n", to), exit(100);

	return (0);
}
