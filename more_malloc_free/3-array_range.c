#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: smallest int in array
 * @max: largest int in array
 * Return: the pointer to the newly created array, NULL if min > max,
 * NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;
	int j = 0;

	/* Check if min value is greater than max value */
	if (min > max)
		return (NULL);

	/* Allocate memory based on range of values */
	ar = malloc(sizeof(int) * (min - max + 1));
	if (ar == NULL)
		return (NULL);

	/* Fill array w/ values form min and max */
	for (i = min; i <= max; i++)
	{
		ar[j] = i; /* Assign current value of array */
		j++;
	}

	/* Return pointer to newly created array */
	return (ar);
}
