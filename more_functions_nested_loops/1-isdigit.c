#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: character to be checked
 * Return: 1 for a character that will be a digit or 0 for any else
 */
int _isdigit(int c)
{
	if (c < 48 && c > 57)
	{
	return (1);
	}
	if (c > 32 && c < 126)
	{
	return (0);
	}
}
