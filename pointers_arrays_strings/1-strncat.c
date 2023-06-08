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
	int lengthD = 0;
	int lengthS = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++;
	while (*(src + lengthS) != '\0' && lengthD < n)
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
		lengthS++;
	}
		*(dest + lengthD) = '\0';
		return (dest);
}
