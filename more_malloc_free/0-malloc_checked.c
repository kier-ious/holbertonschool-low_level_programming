#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: the number to allocate memory for
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
