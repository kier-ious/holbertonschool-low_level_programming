#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Print a triangle
 * @size: size of the triangle
 * Return: 0 (success)
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)

	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
	{
		for (y = 0; y < x; y++)
		{
			putchar(32);
		}
		for (z = 0; z <= x; z++)
		{
			putchar(35);
		}
	putchar('\n');
	}
	}
}
