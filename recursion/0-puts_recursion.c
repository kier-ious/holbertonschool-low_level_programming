#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - prints string followed by new line
 * @s: string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')

	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
