#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: arr of ints
 * @size: size of arr
 * @value: value to find in arr
 * Return: prints or -1 if fail
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	while (index < size)
	{
		printf("Value checked array[%li] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
