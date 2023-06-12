#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: source
 * @c: character
 * Return: located character
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == c)
		{
		return (s);
		}
		else
			s++;
	}
	if (*s == c)

		return (s);
	else
		return (0);
}
