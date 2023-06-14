#include <stdio.h>
#include "main.h"
#include "0-puts_recursion.c"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to print
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
