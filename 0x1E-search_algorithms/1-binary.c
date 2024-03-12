#include "search_algos.h"

/**
 * dive - funtion
 * @array: array needed
 * @size: sze of arr
 * @value: value we search for
 * Return: index needed
 */
int dive(int *array, size_t size, int value)
{
	size_t in = size / 2;
	size_t i;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (in && size % 2 == 0)
		in--;

	if (value == array[in])
		return ((int)in);

	if (value < array[in])
		return (dive(array, in, value));
	in++;

	return (dive(array + in, size - in, value) + in);
}

/**
 * binary_search - implements a binary sera
 * @array: pointer to the first element
 * @size: size of arr
 * @value: value we search for
 * Return: return first element of array
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = dive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
