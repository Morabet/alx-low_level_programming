#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: args size .
 * @av: args value.
 *
 * Return: pointer to array.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, k, size = 0;
	unsigned int j;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
			size++;
	}

	s = malloc((size * sizeof(*s) + ac + 1);
	if (s == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
