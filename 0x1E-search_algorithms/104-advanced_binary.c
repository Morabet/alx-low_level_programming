#include "search_algos.h"

/**
 * print_array - print the array from left to right
 * @array: the pointer to the first element of the array
 * @l: the left pointer of the array
 * @r: the right pointer of the array
 * return: Nothin
 */
void print_array(int *array, size_t l, size_t r)
{
	if (!array)
		return;
	printf("Searching in array: %d", array[l]);
	l++;
	while (l <= r)
	{
		printf(", %d", array[l]);
		l++;
	}
	printf("\n");
}
/**
 * _advanced_search - searching for the value index
 * @array: pointer to the first element of the array to search in
 * @left: the start of the array
 * @right: the end of the array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int _advanced_search(int *array, size_t left, size_t right, int value)
{
	size_t m;

	if (right < left)
		return (-1);

	print_array(array, left, right);
	m = (left + right) / 2;
	if (array[m] == value && (m == left || array[m - 1] != value))
		return (m);

	if (array[m] < value)
		return (_advanced_search(array, m + 1, right, value));
	return (_advanced_search(array, left, m, value));
}
/**
 * advanced_binary- searches for a value using
 *		the advanced binary search algorithm
 * @array: array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	if ((size == 1) && (array[0] == value))
		return (0);
	return (_advanced_search(array, 0, size - 1, value));
}
