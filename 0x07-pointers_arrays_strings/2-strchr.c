#include "main.h"
#include <stdio.h>
/**
 * _strchr -  find char in string.
 * @s: pointer to the string.
 * @c: char to find.
 *
 * Return: pointer to first c.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == c)
		return (s[i]);
	return (NULL);
}
