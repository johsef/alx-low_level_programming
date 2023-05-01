#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: pointer to the file path
 * @letters: no of letters that should be read or print
 *
 * Return: no of letters it could print and read,0 if otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wc, rc;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}

	rc = read(fd, buff, letters);
	if (rc == -1)
		return (0);

	wc = write(STDOUT_FILENO, buff, rc);
	if (wc == -1 || rc != wc)
		return (0);

	free(buff);
	close(fd);
	return (wc);
}
