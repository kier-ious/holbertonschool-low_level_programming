#include "main.h"
#include <stdio.h>
/**
 * _strncat - cats two strings
 * @dest: Destination string
 * @src: source to be cat'd
 * @n: the max number of characters to be appended
 * Return: the cat'd string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);

}
