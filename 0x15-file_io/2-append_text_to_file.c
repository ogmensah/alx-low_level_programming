#include "main.h"

/**
 * append_text_to_file - Entry Point
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	wr = write(file, text_content, i);

	if (wr == -1 || file == -1)
		return (-1);

	close(file);
	return (1);
}
