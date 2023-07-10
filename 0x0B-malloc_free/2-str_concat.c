#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings.
 * @s1: pointer to str1.
 * @s2: pointer to str2.
 *
 * Return: pointer to array.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, size1, size2, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);
	size = size1 + size2;

	p = malloc((size * sizeof(*p)) + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		*(p + i) = *(s1 + i);
	}

	for (i = 0; i < size2; i++)
	{
		*(p + size1  + i) = *(s2 + i);
	}

	*(p + size + 1) = '\0';
	return (p);
}
