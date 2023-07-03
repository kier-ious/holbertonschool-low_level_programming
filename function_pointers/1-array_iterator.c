#include "function_pointers.h"
/**
 * array_iterator - applies a provided function to every element of array
 * @array: the array being passed
 * @size: size of the array
 * @action: the function to execute
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* declare a varto store index of current element in array */
	size_t i;

	/* check if array and func ptr arn't NULL, if they are return from func */
	if (!array || !action)
		{
		return;
		}

		/* iterate thru array, calling func pointed out by action on each element */
		for (i = 0; i < size; i++)
		{
			/* call func pointed to by action w/ current element of array as argument */
			action(array[i]);
		}
}
