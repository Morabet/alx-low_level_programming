#include "main.h"
/**
 * _memset -  allows you to set a block of memory to a specific value.
 * @s: pointer to the block of memory to be set;
 * @b: value to be set;
 * @n: number of memory to be set.
 *
 * Return: pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
