#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concats two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to include in @s2
 * Return: newly allocated space in memory;
 * NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int m;
	unsigned int p;
	unsigned int k = 0;
	unsigned int len;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Calculate the lengths of the strings */
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	/* Limit length of s2 to n bytes */
	if (j > n)
		j = n;
	/*calculate total length of cat'd strings */
	len = i + j;
	/* Allocate memory for cat'd strings */
	ar = malloc(sizeof(char) * (len + 1));
	if (ar == NULL)
		return (NULL);
	/* Copy characters from s1 and s2 strings */
	for (p = 0; p < i; p++)
		ar[k++] = s1[p];
	for (m = 0; m < j; m++)
		ar[k++] = s2[m];
	/* Returns NULL for valid string */
	ar[k] = '\0';
	return (ar);
}
