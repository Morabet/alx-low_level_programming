#include "search_algos.h"

/**
 * min - finds the minimum of two values
 * @a: value
 * @b: value
 * Return: int
 */

int min(int a, int b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_search - searches for a value using the Jump search algorithm
 * @array: array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	size_t i = 0, prev = 0;

	if (!array)
		return (-1);

	/*printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);*/
	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		i = prev;
		prev += jump_step;

		if (i >= size)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev);
	for (i = prev; i <= (size_t)min(jump_step, size - 1) ; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
