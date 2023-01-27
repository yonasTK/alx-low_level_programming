#include "search_algos.h"

/**
 * exponential_search - searches for a val in a sorted arr using ESA
 * @array: pointer to 1st element of the array
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, newsize = 0;
	int ret;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	newsize = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	ret = binary_search(array + i, newsize, value);
	return (ret == -1 ? ret : ret + (int)i);
}

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
