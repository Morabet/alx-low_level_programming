#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid previously created by your alloc_grid function.
 * @grid: 2D array .
 * @height: int.
 *
 * Return: pointer to array.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}

	free(grid);
}
