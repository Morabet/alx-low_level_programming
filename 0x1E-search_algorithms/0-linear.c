#include "search_algos.h"

/**
 * linear_search - searches for a value using the Linear search algorithm
 * @array: array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
