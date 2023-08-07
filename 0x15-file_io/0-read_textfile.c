#include "main.h"

/**
 * read_textfile -  read a text file and print it.
 * @filename: the name of file.
 * @letters: the number of letters to read.
 *
 * Return: the number of letters or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, size;
	char *text;

	text = malloc(letters);
	if (!text || !filename)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	size = read(f, text, letters);

	size = write(STDOUT_FILENO, text, size);

	close(f);
	return (size);
}
