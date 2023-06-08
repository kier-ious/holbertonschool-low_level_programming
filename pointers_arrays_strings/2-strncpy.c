#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Write a function that copies a string
 * @dest: Destination string
 * @src: source to be copied
 * @n: the max number of characters to be appended
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	dest[i + j] = '\0';
	return (dest);

}
