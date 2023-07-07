#include "main.h"
#include <stdio.h>
/**
 * _strspn -  gets the length of prefix substring.
 * @s: pointer to the string.
 * @accept: pointer to string.
 *
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, i = 0;

	while (*s != '\0')
	{
		char *c = accept;

		while (*c != '\0')
		{
			if (*c == *s)
				n++;

			c++;
		}

		i++;
		s++;

		if (i != n)
			break;
	}
	return (n);
}
