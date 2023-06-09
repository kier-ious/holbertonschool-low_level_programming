#include "main.h"
#include <stdio.h>
/**
 * string_toupper - change lowercase to uppercase
 * Return: 0
 */
char *string_toupper(char *)
{
	char * = p, p = 0;
	int i;

	while (*(p + i) != '\0')
	{
		if (*(p + i) >= 'a' && *(p + i) <= 'z')
		{
			*(p + i) = *(p + i) -27;
		}
		i++;
	}
	return(p);
}
