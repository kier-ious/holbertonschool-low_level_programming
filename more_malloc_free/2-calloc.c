#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates mem for array using malloc
 * @nmemb: number of elements
 * @size: size of element type
 * Return: pointer to allocated mem, NULL if 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;


	/* if nmemb or size are 0 return NULL */
	if (size == 0 || nmemb == 0)
		return (NULL);

	/* allocate memory for nmemb elements */
	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);

	/* initialize allocated memory to 0 */
	for (i = 0; i < (size * nmemb); i++)
		ar[i] = 0;

	/* return pointer to allocated memory */
	return (ar);
}
