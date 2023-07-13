#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range -  create an array of integers.
 * @min: first element of array.
 * @max: last element of array.
 *
 * Return: pointer to array.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(max - min + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i <= (max - min + 1); i++)
		p[i] = min++;
	return (p);

}
