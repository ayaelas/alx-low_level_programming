#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of int
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value we searh for
 * Return : first element in a array
 */
int linear_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	int i;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
