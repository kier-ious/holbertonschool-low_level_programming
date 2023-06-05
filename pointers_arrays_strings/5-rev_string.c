#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * rev_string - Prints a string in reverse
  * @s: The string to print
  * Return: void
  */
void rev_string(char *s)
{
	int n = (strlen(*s) - 1) / 2;
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
