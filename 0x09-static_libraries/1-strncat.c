#include "main.h"
/**
  * _strncat - entry point
  * @dest: param
  * @src: param
  * @n: param
  *
  * Return: char
  */
char *_strncat(char *dest, char *src, int n)
{
	char *t;
	int i = 0;

	t = dest;

	while (*t != '\0')
	{
		t++;
	}

	while (*src != '\0' && i < n)
	{
		*t = *src;
		i++;
		src++;
		t++;
	}
	*t = '\0';

	return (dest);
}
