#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of int
 * @array: arr of ints
 * @size: size of arr
 * @value: value to find in arr
 * Return: prints or -1 if fail
*/
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	int jump;
	jump = sqrt(size);
	int prev = 0;

	while (array[fmin(jump, size) - 1] < value)
	{
		prev = jump;
		jump += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	for (int i = prev; i < min(jump, size); i++)
	{
		printf("%d ", array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
