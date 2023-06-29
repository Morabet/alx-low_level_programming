#include "main.h"
/**
  * _strcat - entry point
  * @dest: param
  * @src: param
  *
  * Return: char
  */
char *_strcat(char *dest, char *src)
{
	char *t;

	t = dest;
	while (*t != '\0')
	{
		t++;
	}
	while (*src != '\0')
	{
		*t = *src;
		src++;
		t++;
	}
	*t = '\0';
	return (dest);
}
