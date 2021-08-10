#include <Holberton.h>
#include <Main.h>
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
	char buf(1024);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		exit (1);
	read(fd, buf, letters);
	close (fd);

	_putchar(buf);
	return (letters);
}
