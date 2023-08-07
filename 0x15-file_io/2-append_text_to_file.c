#include "main.h"

/**
 * append_text_to_file -  append text to the end of file.
 * @filename: the name of file.
 * @text_content: contents of the file. 
 *
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, r, i;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
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
