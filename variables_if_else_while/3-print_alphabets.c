#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 * Return: 0 (Success)
 */
	int main(void)

{

	char letter;

	/* print uppercase letter */

	for (letter = 'a' ; letter <= 'z' ; letter++)

		putchar (letter);

	/* print lowercase letters */

	for (letter = 'A' ; letter <= 'Z' ; letter++)

		putchar (letter);

		putchar ('\n');

	return (0);

}


