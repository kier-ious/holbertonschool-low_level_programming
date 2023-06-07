#include "main.h"
#include <stdio.h>
/**
 * _strcat - cats two strings
 * @dest: string to be added to
 * @src: string to be added
 * Return: value of the cat strings
 */
char *_strcat(char *dest, char *src)
{
	int stringD, stringS;

	int stringD = 0;
	int stringS = 0;

	while (dest + stringD != '\0')
		stringD++;
	while (src + stringS != '\0' && stringD < 99)
	{
		stringD++;
		stringS++;
	}
		(dest + stringD = src + stringS);
		return (dest);
}
