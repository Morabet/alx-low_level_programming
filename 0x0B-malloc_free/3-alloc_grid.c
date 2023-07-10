#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int .
 * @height: int.
 *
 * Return: pointer to array.
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(width * sizeof(**p));
		if (*(p + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(p + j));
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
