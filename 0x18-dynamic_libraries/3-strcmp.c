#include "main.h"
/**
  * _strcmp - entry point
  * @s1: param
  * @s2: param
  *
  * Return: int
  */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			diff = *s1 - *s2;
			break;
		}
		else
		{
			s1++;
			s2++;
		}
	}

	return (diff);
}
