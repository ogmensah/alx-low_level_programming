#include "main.h"

/**
 * create_file - Entry Point
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	while (text_content[i])
		i++;

	if (text_content != NULL)
	{
		write(file, text_content, i);
	}
	if (file == -1)
		return (-1);

	close(file);
	return (1);
}
