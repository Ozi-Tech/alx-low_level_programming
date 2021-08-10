#include <holberton.h>
#include <main.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints to the standard output
 * @filename: pointer to the file name
 * @letters: number of letters it should read and print
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff = malloc(sizeof char) * letters;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buff, letters);
	if (r == -1)
		return (0);
	close(fd);

	w = write(STDOUT_FILENO, buff, r)
	if (w == -1)
		return (0);
	else
		return (w);
}
