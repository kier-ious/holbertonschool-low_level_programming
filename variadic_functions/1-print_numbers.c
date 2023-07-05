#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* declare var to hold info to pull additional args */
	va_list valist;
	unsigned int i;

	/* init the va_list using va_start macro */
	/* the 2nd parameter is the last fixed of func */
	va_start(valist, n);

	/* iterate through n args */
	for (i = 0; i < n; i++)
	{
		/* retreive nxt arg from va_list */
		/* the 2nd parameter va_arg specifies type of arg */
		printf("%i", va_arg(valist, int));

		/* check if separator is provided & if its not the last arg */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	/* clean up the va_list using va_end macro */
	va_end(valist);
}
