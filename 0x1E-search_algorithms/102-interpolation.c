#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t top = 0;
	size_t btm = size - 1;
	size_t intr = 0;

	if (array != NULL)
	{
		while ((array[top] != array[btm]) &&
		       (value >= array[btm]) &&
		       (value <= array[top]))
		{
			intr = btm + (((double)(top - btm) / (array[top] - array[btm])) *
				     (value - array[btm]));
			printf("Value checked array[%lu] = [%d]\n", intr, array[intr]);
			if (array[intr] < value)
				btm = intr + 1;
			else if (value < array[intr])
				top = intr - 1;
			else
				return (intr);
		}
		if (value == array[btm])
			return (btm);
		intr = btm + (((double)(top - btm) / (array[top] - array[btm]))
			     * (value - array[btm]));
		printf("Value checked array[%lu] is out of range\n", intr);
	}
	return (-1);
}
