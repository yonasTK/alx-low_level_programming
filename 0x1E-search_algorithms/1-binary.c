#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using BSA
 * @array: pointer to first element of array to search
 * @size: size of the array
 * @value: value to seach for
 *
 * Return: index of value location or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid;
	size_t i;

	if (!array || !size)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array:");
		for (i = start; i <= end; i++)
		{
			if (i < end)
				printf(" %d,", array[i]);
			else
				printf(" %d\n", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
