#include "main.h"
/* @zinzinpolice */
/**
 * create_file - function that creates a file.
 * @filename: A first pointer.
 * @text_content: A second pointer.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fud, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fud = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fud, text_content, len);

	if (fud == -1 || x == -1)
		return (-1);

	close(fud);
	return (1);
}
