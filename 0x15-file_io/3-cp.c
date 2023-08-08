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
	int to, from, r1 = 1024, r2 = 0;
	char txt[1024];

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	to = open(name, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);

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
