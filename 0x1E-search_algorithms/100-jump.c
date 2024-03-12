#include "search_algos.h"

/**
 * jump_search - Search for a val by a jump search.
 * @array: the array
 * @size: the length of arr
 * @value: the value we searh for
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t index = sqrt(size);
	size_t right = 0;
	size_t left = 0;

	if (!array || size == 0)
	{
		return (-1);
	}
	while (right < size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)right, array[right]);
		left = right;
		right += index;
		if (left >= size)
		{
			return (-1);
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)left, (int)right);
	right = (right >= size) ? size - 1 : right;
	for (; left <= right; left++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)left, array[left]);
		if (array[left] == value)
		{
			return ((int)left);
		}
	}
	return (-1);
}
