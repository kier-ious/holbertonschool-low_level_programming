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
	printf("0\n");
	return (0);
	}


	for (; x = 1; x < argc; x++)
	{

		int y = 1;

	for (y = 0; argv[x][y] != '\0'; y++)
	{
		if (!x(argv[x][y]))
		{
			x = 0;
			break;
		}
	}

		if (!y)
		{
		printf("Error\n");
		return (1);
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);

	return (0);
}
