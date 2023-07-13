#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: num of chars
 *
 * Return: void.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sl1 = strlen(s1);
	unsigned int sl2 = strlen(s2);
	unsigned int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= sl2)
		n = sl2;
	s = malloc(sizeof(*s) * (sl1 + n) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
