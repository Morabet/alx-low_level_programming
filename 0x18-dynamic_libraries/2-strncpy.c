#include "main.h"
/**
  * _strncpy - entry point
  * @dest: param
  * @src: param
  * @n: param
  *
  * Return: char
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *t;
	int i = 0;

	t = dest;

	while (i < n && *src != '\0')
	{
		*t = *src;
		i++;
		t++;
		src++;
	}

	while (i < n)
	{
		*t = '\0';
		t++;
		i++;
	}

	return (dest);
}
