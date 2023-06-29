#include "main.h"
/**
  * leet - entry point
  * @s: param
  *
  * Return: char
  */
char *leet(char *s)
{
	char *c;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {'4', '3', '0', '7', '1'};
	int i;

	c = s;

	while (*c != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*c == a[i] || *c == (a[i] - ' '))
			{
				*c = b[i];
			}
		}
		c++;
	}

	return (s);
}
