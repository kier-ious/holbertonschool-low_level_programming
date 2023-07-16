#include "main.h"
/**
 * read_textfile - prints text from a file
 * @filename: name of the file
 * @letters: number of characters to read
 * Return: actual number of letters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int name, total, rstatus;
	char buffer[BSIZE];

	if (filename == NULL)
		return (0);
	name = open(filename, O_RDONLY);
	if (name == -1)
		return (0);
	total = 0;
	rstatus = 1;
	while (letters > BSIZE && rstatus != 0)
	{
		rstatus = read(name, buffer, BSIZE);
		write(STDOUT_FILENO, buffer, rstatus);
		total += rstatus;
		letters -= BSIZE;
	}
	rstatus = read(name, buffer, letters);
	write(STDOUT_FILENO, buffer, rstatus);
	total += rstatus;
	close(name);
	return (total);
}
