#include "main.h"
/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: pointer to the file path
 * @text_content: a NULL terminated string to add to end of file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t wc;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);


	fd = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (fd == -1)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	wc = write(fd, text_content, len);
	if (wc == -1)
		return (-1);
	close(fd);
	return (1);
}
