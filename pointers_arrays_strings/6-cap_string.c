#include "main.h"
#include <stdio.h>
/**
 * cap_string - write a function that capitalizes all words in a string
 * @str: string
 * Return:
 */
char *cap_string(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
	if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
		*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}
