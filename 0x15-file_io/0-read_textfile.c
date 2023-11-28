#include "main.h"

/**
 * read_textfile - read a file and output it in the POSIX standard output
 *
 * @filename: The name of the file
 * @letters: The number of letters to print
 *
 * Return: The number of letters printed, 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileopen;
	size_t readfile, writefile;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL || buffer == NULL)
		return (0);
	fileopen = open(filename, O_RDONLY);
	if (fileopen == -1)
		return (0);
	readfile = read(fileopen, buffer, letters);
	buffer[readfile] = '\0';
	writefile = write(STDOUT_FILENO, buffer, readfile);
	free(buffer);
	if (close(fileopen) < 0)
		return (0);
	return (writefile);
}
