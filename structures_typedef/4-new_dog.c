#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function that creates new dog
 * @name: name of doggo, string
 * @age: age of doggo, a float
 * @owner: name of owner, string
 * Return: NULL if funcrtion fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;  /* ptr to hold new dog strct */
	char *ncpy; /* ptr to hold duplicated name string */
	char *ocpy; /* ptr to hold the duplicated owner swtring */

	new = malloc(sizeof(dog_t));
		if (new == NULL)
			return (NULL); /* if malloc fails return NULL */


		ncpy = strdup(name);
		if (!ncpy && name)
		{
			free(new);
			return (NULL); /* if name duplication fails and name isn't NULL */
				 /* free mem and return NULL */
		}

		ocpy = strdup(owner);
		if (!ocpy && owner)
		{
			free(ocpy);
			free(new);
			return (NULL); /* if owner duplication fails and owner isn't NULL */
				 /* free mem and return NULL */
		}

	/* assign new age, name and owner to new dog struct */
	new->name = ncpy;
	new->age = age;
	new->owner = ocpy;

	return (new); /* return the pointer to the new dog struct */
}
