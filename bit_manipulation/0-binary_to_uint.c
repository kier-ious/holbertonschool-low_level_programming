#include "main.h"
/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 * Return: decimal (unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int i = 0;

	for (; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
			decimal <<= 1;
		return (1);
	}
	return (decimal);
}
