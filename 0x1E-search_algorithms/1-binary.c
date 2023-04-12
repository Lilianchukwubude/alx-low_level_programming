#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t beg = 0;
	size_t end = size - 1;
	size_t middle = 0;
	size_t i = 0;

	if (array != NULL)
	{
		while (beg <= end)
		{
			middle = (beg + end) / 2;
			printf("Searching in array: ");
			for (i = beg; i < end; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[middle] < value)
			{
				beg = middle + 1;
			}
			else if (array[middle] > value)
			{
				end = middle - 1;
			}
			else
			{
				return (middle);
			}
		}
	}
	return (-1);
}
