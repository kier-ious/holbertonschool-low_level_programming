#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declare va_list var to hold var args */
	va_list ap;
	/* declare unsigned int var to keep track of loop index */
	unsigned int i;
	/* declare char ptr var to store each string */
	char *og;


	/* init the va_list var w/ var arg */
	va_start(ap, n);

	/* iterate over the strings using va_list */
	for (i = 0; i < n; i++)
	{
		/* get nxt string arg from va_list and assng to og */
		og = (va_arg(ap, char*));
		/*check if og isn't NULL */
		if (og != NULL)
			/* print the string */
			printf("%s", og);
		else
			/* print nil if og is NULL */
			printf("(nil)");
		/* check if separtor isn't NULL & i is < 'n - 1' */
		if (separator != NULL && i < n - 1)
			/* print separtor */
			printf("%s", separator);
	}
	printf("\n");
	/* clean up the va_list */
	va_end(ap);
}
