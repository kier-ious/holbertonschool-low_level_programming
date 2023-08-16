#include "search_algos.h"
/**
* linear_search - searches for a value in an array of ints
* @array: a ptr to the 1st element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: the first index where value is located or -1 on failure or not found
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
	if (value == array[i])
		return (i);
	}
	return (-1);
}
