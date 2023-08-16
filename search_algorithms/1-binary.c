#include "search_algos.h"
/**
 * print_array - print the array of ints, separated w/ ","
 * @array: ptr to the array to print
 * @first: 1st index to print
 * @last: last index to print
 */
void print_array(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		if (i != first)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
/**
 * binary_search - searches for a value in an array of ints
 * @array:ptr to 1st element of searched array
 * @size: the # of elements in array
 * @value: the value to search for
 * Return: the index where value is located  or -1 for fail
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, first = 0, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			print_array(array, first, last);
			i = (first + last) / 2;

		if (value > array[i])
			first = i + 1;
		else if (value < array[i])
			last = i - 1;
		else
			return (i);
		}
	}
	return (-1);
}
