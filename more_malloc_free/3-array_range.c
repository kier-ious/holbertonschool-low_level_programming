#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: smallest int in array
 * @max: largest int in array
 * Return: the pointer to the newly created array, NULL if min > max,
 * NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	/* Check if min value is greater than max value */
	if (min > max)
		return (NULL);

	/* Allocate memory based on range of values */
	array = malloc(sizeof(int) * (min - max + 1));
	if (array == NULL)
		return (NULL);

	/* intitialize elements of array */
	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	/* Return pointer to newly created array */
	return (array);
}
