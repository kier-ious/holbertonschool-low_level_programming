#include "main.h"
#include <string.h>
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
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);

	for ( ; i < n; i++)
		*(dest + i) = '\0';

	return (dest);

}
