#include "search_algos.h"


/**
 * interpolation_search - searches a value using
 *		the Interpolation search algorithm
 * @array: array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = (size - 1);
	size_t pos;

	if (!array)
		return (-1);

	while (array[low] != array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
		{
			return (pos);
		}
		else if (value > array[pos])
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	return (-1);
}
