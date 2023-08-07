#include "main.h"

/**
 * create_file -  create file and write to it.
 * @filename: the name of file.
 * @text_content: contents of the file. 
 *
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, i, r;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;

		r = write(f, text_content, i);
		if (r == -1)
			return (-1);
	}
	close(f);
	return (1);
}
