#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name to print
 * @f: function to send the name to
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	/* check if name and function ptr aren't NULL */
	if (!name || !f)
		/* return if they are NULL */
		return;
	/* call the function ptr w/ the name as the argument */
	f(name);
}
