#include "main.h"
/**
 * _memcpy -  copies memory area.
 * @src: pointer to the source block of memory.
 * @dest: pointer to destination memory.
 * @n: number of memory to be copied.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i == 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
