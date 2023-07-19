#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integers.
 * @array: pointer to array.
 * @size: size of array.
 * @cmp: pointer to the function
 *
 * Return: void.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
