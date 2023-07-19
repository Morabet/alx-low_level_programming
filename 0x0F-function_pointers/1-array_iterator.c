#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute a function on each element of array.
 * @array: pointer to array.
 * @size: size of array.
 * @action: pointer to the function
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
