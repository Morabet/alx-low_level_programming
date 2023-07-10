#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copy string to allocated memory.
 * @str: pointer to char.
 *
 * Return: pointer to array.
 */
char *_strdup(char *str)
{
	char *p;
	int i, size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);

	p = malloc((size * sizeof(*p)) + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(p + i) = *(str + i);
	}

	return (p);
}
