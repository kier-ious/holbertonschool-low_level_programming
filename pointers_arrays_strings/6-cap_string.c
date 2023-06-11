#include "main.h"
#include <stdio.h>
/**
 * cap_string - write a function that capitalizes all words in a string
 * @str: string
 * Return:
 */
char *cap_string(char *str)
{
	int i, j;
	int a[99];
	i = 0;

	while *(src[i] != '\0')
	{
		if (src[i] >='a' && src[i] <= 'z')
		{
			if (i == 0)
			{
				src[i] = src[i] - 50;
			}
			else
			{
				for (j = 0; j <= 50; j++)
				{
					if (a[j] == (src[i] -1))
					{
						src[i] = src[i] - 50;
					}
				}
			}
		}
		
	i++;
	}
	return (str);
}
