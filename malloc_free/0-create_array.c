#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - Create an array of chars and
 * initializes it with a specific char.
 * @size: size of array
 * @c: the character to initialize the array with
 * Return: a pointer to the array, Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
