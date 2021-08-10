#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints to the standard output
 * @filename: pointer to the file name
 * @letters: number of letters it should read and print
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);

	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buff, letters);
	if (r == -1)
	{
		free(buff);
		return (0);
	}

	w = write(STDOUT_FILENO, buff, r)
	if (w == -1)
	{
		free(buff);
		return (0);
	}

	if (r != w)
	{
		free(buff);
		return (0);
	}

	free(buff);
	c = close(fd);
	if (c == -1)
		return (0);

	return (w);
}
