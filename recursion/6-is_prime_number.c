#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - write function if prime
 * @n: number
 * Return: return number
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (1);
	else
		return (is_prime_number(n));
}
