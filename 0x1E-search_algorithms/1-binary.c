#include "search_algos.h"

/**
 * binary_search - searches for a value using the binary search algorithm
 * @array: array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = (size - 1), i;
	int mid, mid_value;

	if (!array)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: %d", array[l]);
		for (i = l + 1; i <= r; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		mid = ((l + r) / 2);
		mid_value = array[mid];

		if (value == mid_value)
		{
			return (value);
		}
		else if (value > mid_value)
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	return (-1);
}
