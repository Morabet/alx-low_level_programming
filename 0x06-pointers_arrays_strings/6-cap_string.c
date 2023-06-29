#include "main.h"
/**
  * cap_string - entry point
  * @s: param
  *
  * Return: char
  */
char *cap_string(char *s)
{
	char *c, *next;
	char seperators[] = " \n\t,;.!?\"(){}";
	int i;

	c = s;
	next = c + 1;

	if (*c >= 'a' && *c <= 'z')
		*c -= ' ';
	while (*c != '\0')
	{
		for (i = 0; seperators[i] != '\0'; i++)
		{
			if (*c == seperators[i] && (*next >= 'a' && *next <= 'z'))
			{
				*next -= ' ';
				break;
			}
		}
		c++;
		next++;
	}
	return (s);
}
