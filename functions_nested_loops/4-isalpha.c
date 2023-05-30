#include "main.h"
/**
 * _isalpha - check the code.
 *
 * Return: return either a 1 or a 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	return (1);

	return (0);
}
