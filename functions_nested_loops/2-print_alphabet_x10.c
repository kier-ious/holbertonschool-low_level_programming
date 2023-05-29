#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 */
void print_alphabet_x10(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		_putchar(c[x]);
	}
	_putchar('\n');
}
