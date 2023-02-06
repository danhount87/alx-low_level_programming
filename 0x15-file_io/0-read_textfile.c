#include "main.h"
#include <stdlib.h>
/* @zinzinpolice */
/**
 * read_textfile - function that reads a text
 * file and prints it to the POSIX standard output.
 * @filename: file to be read
 * @letters: letters to be read
 * Return: the actual number of letters
 * it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fda;
	ssize_t x;
	ssize_t t;

	fda = open(filename, O_RDONLY)
		if (fda == -1)
			return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fda, buffer, letters);
	x = write(STDOUT_FILENO, buffer, t);
	free(buffer);
	close(fda);
	return (x);
}
