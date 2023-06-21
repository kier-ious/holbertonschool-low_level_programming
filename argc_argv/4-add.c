#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numnbers
 * @argc: number of characters
 * @argv: string of array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int x = 0;
	int y = 0;

	if (argc < 1)
	{
		for (; x < argc; x++)
		{
			for (; argv[x][y] != '\0'; y++)
			{
				if (argv[x][y] < 48 || argv[x][y] > 57)

					printf("Error\n");

			return (1);

			sum += atoi(argv[x]);

			}
		}
	}

	return (0);

}
