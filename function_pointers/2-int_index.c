#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for integer
 * @array: array to search through
 * @size: number of elements in an array
 * @cmp: ptr to the func to be used to compare values
 * Return: the index of the 1sr element of the cmp element
 * func doesn't return 0; if no element matches return -1,
 * if size is <= 0, return -1;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Check if array and cmp are not NULL */
	if (array && cmp)
	{
		/* Iterate over the elements of the array */
		for (i = 0; i < size; i++)
		{
			/* Call cmp on each element */
			if (cmp(array[i]))
				/* Return the index if cmp returns non-zero */
				return (i);
		}
	}
	/* Return -1 if no match is found or size <= 0 */
	return (-1);
}
