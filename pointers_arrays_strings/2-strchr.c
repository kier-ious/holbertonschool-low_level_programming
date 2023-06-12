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
	while (*s)
	{
		if (*s != c)

			s++;

		else
			return (s);
	}
	if (c == '\0')

		return (s);

		return (NULL);
}
