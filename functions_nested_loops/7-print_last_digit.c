#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: number to be calculated
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (n < 0)
		n *= -1;

	-putchar(n + '0');
		return (n);

}
