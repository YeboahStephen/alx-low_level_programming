#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Compose a function that reads a text file and
 * print it to the POSIX standard output.
 * @letters: the number of letters it prints
 * @filename: text file being read
 * Return: 0 if the filename is null, and also if fails to write too
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;

	ssize_t fd;

	ssize_t w;

	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
