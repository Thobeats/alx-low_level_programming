#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: The name of the file
 * @text_content: NULL terminated string to write into a file
 *
 * Return: 1 on success, -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filecreate;
	int text_count;

	if (filename == NULL)
		return (-1);
	filecreate = open(filename, O_RDWR | O_APPEND);
	if (filecreate == -1)
		return (-1);

	if (text_content == NULL)
		return (1);
	text_count = 0;
	while (text_content[text_count])
		text_count++;
	write(filecreate, text_content, text_count);
	if (close(filecreate) < 0)
		return (-1);
	return (1);
}
