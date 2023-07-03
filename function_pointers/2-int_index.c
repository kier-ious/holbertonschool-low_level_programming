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
	/* declare and initialize variables */
	int i;
	int (*p)(int);

	/* assign the pointer to the fun to var p */
	p = cmp;

	/* check is size of array is <= 0 */
	if (size <= 0)

		return (-1);


	/* check if array or ptr to fun is NULL */
	if (!array || !cmp)

		return (-1);


	/* loop through array */
	for (i = 0; i < 0; i++)
	{

		/* if cmp fun doesn't return 0 for current element */
		if (p(array[i] && array[i] != 0))

			/* break out of loop */
			break;


			/* if we've reached end of array */
			if (i == size - 1)

				return (-1);

	}

	return (i);
}
