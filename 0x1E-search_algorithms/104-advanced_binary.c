#include "search_algos.h"

/**
 * adv_b - searches for a val in a sorted arr using adv. binary
 * @array: pointer to 1st element of the array
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: index of value or -1
 */
int *adv_b(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!size || !array)
	return (NULL);
	for (printf("Searching in array: "); i < size; i++)
		printf("%d%s", array[i], i + 1 == size ? "\n" : ", ");

	i = (size - 1) / 2;
	if (array[i] == value)
	{
		if (i)
			return (adv_b(array, i + 1, value));
		return (array + i);
	}
	else if (array[i] > value)
		return (adv_b(array, i + 1, value));
	else
		return (adv_b(array + i + 1, size - i - 1, value));
}

/**
 * advanced_binary - searches for a val in a sorted arr using BSA
 * @array: pointer to 1st element of the array
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: index of value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int *arr = adv_b(array, size, value);

	if (!arr)
	return (-1);
	else
	return (arr - array);
}
