#include "main.c"
/**
 * _strpbrk -  search a string for any of a set of bytes.
 * @s: pointer to the string.
 * @accept: pointer to string.
 *
 * Return: number of bytes.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
