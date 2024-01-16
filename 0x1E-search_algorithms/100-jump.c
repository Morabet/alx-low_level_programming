#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function that searches for a value in
 *        a sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
    size_t prev, next, step;

    if (!array)
        return (-1);

    prev = 0;
    next = 0;
    step = sqrt(size);

    while ((next < size)  && (array[next] < value))
    {
        printf("Value checked array[%ld] = [%d]\n", next, array[next]);

        prev = next;
        next += step;

        if (prev >= size)
            return (-1);
    }

    printf("Value found between indexes [%ld] and [%ld]\n", prev, next);
    next = next >= size ? size - 1 : next;

    while ((prev <= next) && (array[prev] <= value))
    {
        printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

        if (array[prev] == value)
            return (prev);
        prev++;
    }


    return (-1);
}
