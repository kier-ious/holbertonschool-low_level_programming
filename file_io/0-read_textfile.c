#include "main.h"
#include <stdio.h>
/**
 * read_textfile - prints text from a file
 * @filename: name of the file
 * @letters: number of characters to read
 * Return: actual number of letters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt_file, total, read_status;
	char buffer[BUFSIZ];

	if (filename == NULL)
		return (0);

	txt_file = popen(filename, O_RDONLY);
	if (txt_file == -1)
		return (0);

	total = 0;
	read_status = 1;
	while (letters > BUFSIZ && read_status != 0)
	{
		read_status = read(txt_file, buffer, BUFSIZ);
		write(STDOUT_FILENO, buffer, read_status);
		total += read_status;
		letters -= BUFSIZ;
	}

	read_status = read(txt_file, buffer, letters);
	write(STDOUT_FILENO, buffer, read_status);
	total += read_status;

	close(txt_file);

	return (total);
}
