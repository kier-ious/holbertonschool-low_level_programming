#include "main.h"
/**
 * create_file - created file must have those permissions: rw-------
 * @filename: name given on saved file
 * @text_content: the null terminating string to fill in
 * Returns: 1 on success, -1 on failure
 * (file can not be created, file can not be written, write “fails”
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, len, wr_stat;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(new_file);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	wr_stat = write(new_file, text_content, len);
	if (close(new_file) == -1)
		return (-1);
	return (wr_stat == -1 ? -1 : 1);
}
