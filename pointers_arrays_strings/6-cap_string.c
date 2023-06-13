#include "main.h"
#include <stdio.h>
/**
 * cap_string - write a function that capitalizes all words in a string
 * @str: string
 * Return: void
 */
char *cap_string(char *str)
{
	int i, j;
	int a[99];
	i = 0;


	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				for (j = 0; j <= 32; j++)
				{
					if (a[j] == (str[i] - 1))
					{
						str[i] = str[i] - 32;
					}
				}
			}
		}

	i++;
	}
	return (str);
}
