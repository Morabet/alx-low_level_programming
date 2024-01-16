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
 * _binary_search - searches for a value using the binary search algorithm
 * @array: array to search in
 * @left: The starting index of the [sub]array to search
 * @right: The ending index of the [sub]array to search
 * @value: value to search for
 * Return: int
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (!array)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
/**
 * exponential_search - searches a value using the Exponential search algorithm
 * @array: array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low;

	if (!array)
		return (-1);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	low = bound / 2;
	bound = min(bound, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", low, bound);
	return (_binary_search(array, low, bound, value));
}
