#include "main.h"
/**
  * rot13 - entry point
  * @s: param
  *
  * Return: char
  */
char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *c;
	int i;

	c = s;

	while (*c != '\0')
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (*c == a[i])
			{
				*c = b[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
