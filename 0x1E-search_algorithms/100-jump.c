#include "search_algos.h"
#include "math.h"

/**
 * jump_search -  function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t top = 0;
	size_t btm = 0, i = 0;

	if (array != NULL)
	{
		while (top < size && array[top] < value)
		{
			btm = top;
			top = top + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       btm, array[btm]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       btm, top);
		for (i = btm; i <= top; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
