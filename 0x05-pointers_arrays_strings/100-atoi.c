#include "main.h"
/**
* _atoi -  a function that convert a string to an integer.
* @s: pointer to string
*
* Return: int.
*/
int _atoi(char *s)
{
	int t = 0;
	unsigned int n = 0;
	int min = 1;
	int isi = 0;

	while (*s)
	{
		if (*s == '-')
		{
			min *= -1;
		}
		while (*s >= '0' && *s <= '9')
		{
			isi = 1;
			n = (n * 10) + (*s - '0');
			s++;
		}
		if (isi == 1)
		{
			break;
		}
		s++;
	}
	n *= min;
	return (n);
}
