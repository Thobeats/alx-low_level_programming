#include "main.h"

/**
 * create_file - creates a new file
 *
 * @filename: The name of the file
 * @text_content: NULL terminated string to write into a file
 *
 * Return: 1 on success, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int filecreate;
	int size;
	int text_count;

	text_count = 0;
	if (filename == NULL)
		return (-1);
	filecreate = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filecreate == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (*text_content)
		text_count++;
	size = write(filecreate, text_content, text_count);

	if (size < 0)
		return (-1);
	if (close(filecreate) < 0)
		return (-1);
	return (1);
}
