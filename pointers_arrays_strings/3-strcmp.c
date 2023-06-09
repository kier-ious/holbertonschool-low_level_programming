#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcmp - Comparing two strings
 * @s1: One string to be comnpared
 * @s2: Other string to be compared
 * Return: Result
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)

	{
		return (0);
	}

	else

	{
		return (*s1 - *s2);
	}
}
