#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - reverses an array of integers
 * @a: pointer to an interger array
 * @n: size of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
