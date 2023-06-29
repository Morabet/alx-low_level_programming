#include "main.h"
/**
  * string_toupper - entry point
  * @s: param
  *
  * Return: char
  */
char *string_toupper(char *s)
{
	char *c;

	c = s;

	while (*c != '\0')
	{
		if (*c == '\\')
			c++;
		if (*c >= 'a' && *c <= 'z')
		{
			*c -= ' ';
		}
		c++;
	}

	return (s);
}
