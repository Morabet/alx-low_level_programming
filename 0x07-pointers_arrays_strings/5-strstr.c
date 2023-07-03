#include "main.h"
#include <stdio.h>
/**
  * _strstr - entry point
  * @haystack: param
  * @needle: param
  *
  * Return: poiner
  */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (char *)haystack;
		}

		haystack++;
	}

	return (NULL);
}
