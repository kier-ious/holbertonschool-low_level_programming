#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers 0 to 9
 * description: prints numbers excluding 2 and 4
 * Return: the numners from 0 to 9
 */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
		continue;
		}
	else
		{
		putchar(x + '0');
		}
	}
	putchar('\n');
}
